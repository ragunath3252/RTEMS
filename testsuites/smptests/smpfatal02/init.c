/*
 * Copyright (c) 2014 embedded brains GmbH.  All rights reserved.
 *
 *  embedded brains GmbH
 *  Dornierstr. 4
 *  82178 Puchheim
 *  Germany
 *  <rtems@embedded-brains.de>
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rtems.com/license/LICENSE.
 */

#ifdef HAVE_CONFIG_H
  #include "config.h"
#endif

#include <rtems.h>
#include <rtems/score/percpu.h>
#include <rtems/score/smpimpl.h>

#include <assert.h>
#include <stdlib.h>

#define MAX_CPUS 32

static uint32_t main_cpu;

static void Init(rtems_task_argument arg)
{
  assert(0);
}

static void end_of_test(void)
{
  printk( "*** END OF TEST SMPFATAL 2 ***\n" );
}

static void fatal_extension(
  rtems_fatal_source source,
  bool is_internal,
  rtems_fatal_code code
)
{
  if (
    source == RTEMS_FATAL_SOURCE_APPLICATION
      || source == RTEMS_FATAL_SOURCE_SMP
  ) {
    uint32_t self = rtems_smp_get_current_processor();

    assert(!is_internal);

    if (self == main_cpu) {
      uint32_t cpu;

      assert(source == RTEMS_FATAL_SOURCE_APPLICATION);
      assert(code == 0xdeadbeef);

      for (cpu = 0; cpu < MAX_CPUS; ++cpu) {
        const Per_CPU_Control *per_cpu = _Per_CPU_Get_by_index( cpu );
        Per_CPU_State state = per_cpu->state;

        assert(state == PER_CPU_STATE_SHUTDOWN);
      }

      end_of_test();
    } else {
      assert(source == RTEMS_FATAL_SOURCE_SMP);
      assert(code == SMP_FATAL_SHUTDOWN);
    }
  }
}

static rtems_status_code test_driver_init(
  rtems_device_major_number major,
  rtems_device_minor_number minor,
  void *arg
)
{
  uint32_t self = rtems_smp_get_current_processor();
  uint32_t cpu_count = rtems_smp_get_processor_count();
  uint32_t cpu;

  printk("\n\n*** TEST SMPFATAL 2 ***\n");

  assert(rtems_configuration_get_maximum_processors() == MAX_CPUS);

  main_cpu = self;

  for (cpu = 0; cpu < MAX_CPUS; ++cpu) {
    const Per_CPU_Control *per_cpu = _Per_CPU_Get_by_index( cpu );
    Per_CPU_State state = per_cpu->state;

    if (cpu == self) {
      assert(state == PER_CPU_STATE_INITIAL);
    } else if (cpu < cpu_count) {
      assert(
        state == PER_CPU_STATE_INITIAL
          || state == PER_CPU_STATE_READY_TO_START_MULTITASKING
      );
    } else {
      assert(state == PER_CPU_STATE_INITIAL);
    }
  }

  if (cpu_count > 1) {
    rtems_fatal(RTEMS_FATAL_SOURCE_APPLICATION, 0xdeadbeef);
  } else {
    end_of_test();
    exit(0);
  }

  return RTEMS_SUCCESSFUL;
}

#define CONFIGURE_APPLICATION_DOES_NOT_NEED_CLOCK_DRIVER
#define CONFIGURE_APPLICATION_NEEDS_CONSOLE_DRIVER

#define CONFIGURE_APPLICATION_EXTRA_DRIVERS \
  { .initialization_entry = test_driver_init }

#define CONFIGURE_INITIAL_EXTENSIONS { .fatal = fatal_extension }

#define CONFIGURE_SMP_APPLICATION

#define CONFIGURE_SMP_MAXIMUM_PROCESSORS MAX_CPUS

#define CONFIGURE_MAXIMUM_TASKS 1

#define CONFIGURE_RTEMS_INIT_TASKS_TABLE

#define CONFIGURE_INIT

#include <rtems/confdefs.h>