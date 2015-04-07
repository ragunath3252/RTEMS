/*
 *  Copyright 1994, Drew Eckhardt
 *  Copyright 1997, 1998 Martin Mares <mj@atrey.karlin.mff.cuni.cz>
 *
 *  This file comes from the auto-generated PCI IDs part of the
 *  cpukit/include/rtems/pci.h.
 *  Copyright 2009, Cobham Gaisler AB
 *
 *  For more information, please consult the following manuals (look at
 *  http://www.pcisig.com/ for how to get them):
 *
 *  PCI BIOS Specification
 *  PCI Local Bus Specification
 *  PCI to PCI Bridge Specification
 *  PCI System Design Guide
 */

/* PCI Vendor and card ID's: sort these numerically according to vendor
 * (and according to card ID within vendor). Send all updates to
 * <linux-pcisupport@cck.uni-kl.de>.
 */
 
/* For the future this file should be generated
 * from the PCI IDS database at http://pciids.sourceforge.net/ ?
 */

#ifndef __PCI_IDS_H__
#define __PCI_IDS_H__

/* Include non-public PCI ids (not auto generated) */
#include <pci/ids_extra.h>

/* Not a valid ID, used to match any device ID */
#define PCI_ID_ANY 0xffff

/*
 * Vendor and card ID's: sort these numerically according to vendor
 * (and according to card ID within vendor). Send all updates to
 * <linux-pcisupport@cck.uni-kl.de>.
 */
#define PCIR_VENDOR_COMPAQ		0x0e11
#define PCIR_DEVICE_COMPAQ_1280	0x3033
#define PCIR_DEVICE_COMPAQ_TRIFLEX	0x4000
#define PCIR_DEVICE_COMPAQ_SMART2P	0xae10
#define PCIR_DEVICE_COMPAQ_NETEL100	0xae32
#define PCIR_DEVICE_COMPAQ_NETEL10	0xae34
#define PCIR_DEVICE_COMPAQ_NETFLEX3I	0xae35
#define PCIR_DEVICE_COMPAQ_NETEL100D	0xae40
#define PCIR_DEVICE_COMPAQ_NETEL100PI	0xae43
#define PCIR_DEVICE_COMPAQ_NETEL100I	0xb011
#define PCIR_DEVICE_COMPAQ_THUNDER	0xf130
#define PCIR_DEVICE_COMPAQ_NETFLEX3B	0xf150

#define PCIR_VENDOR_NCR		0x1000
#define PCIR_DEVICE_NCR_53C810	0x0001
#define PCIR_DEVICE_NCR_53C820	0x0002
#define PCIR_DEVICE_NCR_53C825	0x0003
#define PCIR_DEVICE_NCR_53C815	0x0004
#define PCIR_DEVICE_NCR_53C860	0x0006
#define PCIR_DEVICE_NCR_53C896	0x000b
#define PCIR_DEVICE_NCR_53C895	0x000c
#define PCIR_DEVICE_NCR_53C885	0x000d
#define PCIR_DEVICE_NCR_53C875	0x000f
#define PCIR_DEVICE_NCR_53C875J	0x008f

#define PCIR_VENDOR_ATI		0x1002
#define PCIR_DEVICE_ATI_68800		0x4158
#define PCIR_DEVICE_ATI_215CT222	0x4354
#define PCIR_DEVICE_ATI_210888CX	0x4358
#define PCIR_DEVICE_ATI_215GB		0x4742
#define PCIR_DEVICE_ATI_215GD		0x4744
#define PCIR_DEVICE_ATI_215GI		0x4749
#define PCIR_DEVICE_ATI_215GP		0x4750
#define PCIR_DEVICE_ATI_215GQ		0x4751
#define PCIR_DEVICE_ATI_215GT		0x4754
#define PCIR_DEVICE_ATI_215GTB	0x4755
#define PCIR_DEVICE_ATI_210888GX	0x4758
#define PCIR_DEVICE_ATI_215LG		0x4c47
#define PCIR_DEVICE_ATI_264LT		0x4c54
#define PCIR_DEVICE_ATI_264VT		0x5654

#define PCIR_VENDOR_VLSI		0x1004
#define PCIR_DEVICE_VLSI_82C592	0x0005
#define PCIR_DEVICE_VLSI_82C593	0x0006
#define PCIR_DEVICE_VLSI_82C594	0x0007
#define PCIR_DEVICE_VLSI_82C597	0x0009
#define PCIR_DEVICE_VLSI_82C541	0x000c
#define PCIR_DEVICE_VLSI_82C543	0x000d
#define PCIR_DEVICE_VLSI_82C532	0x0101
#define PCIR_DEVICE_VLSI_82C534	0x0102
#define PCIR_DEVICE_VLSI_82C535	0x0104
#define PCIR_DEVICE_VLSI_82C147	0x0105
#define PCIR_DEVICE_VLSI_VAS96011	0x0702

#define PCIR_VENDOR_ADL		0x1005
#define PCIR_DEVICE_ADL_2301		0x2301

#define PCIR_VENDOR_NS		0x100b
#define PCIR_DEVICE_NS_87415		0x0002
#define PCIR_DEVICE_NS_87410		0xd001

#define PCIR_VENDOR_TSENG		0x100c
#define PCIR_DEVICE_TSENG_W32P_2	0x3202
#define PCIR_DEVICE_TSENG_W32P_b	0x3205
#define PCIR_DEVICE_TSENG_W32P_c	0x3206
#define PCIR_DEVICE_TSENG_W32P_d	0x3207
#define PCIR_DEVICE_TSENG_ET6000	0x3208

#define PCIR_VENDOR_WEITEK		0x100e
#define PCIR_DEVICE_WEITEK_P9000	0x9001
#define PCIR_DEVICE_WEITEK_P9100	0x9100

#define PCIR_VENDOR_DEC		0x1011
#define PCIR_DEVICE_DEC_BRD		0x0001
#define PCIR_DEVICE_DEC_TULIP		0x0002
#define PCIR_DEVICE_DEC_TGA		0x0004
#define PCIR_DEVICE_DEC_TULIP_FAST	0x0009
#define PCIR_DEVICE_DEC_TGA2		0x000D
#define PCIR_DEVICE_DEC_FDDI		0x000F
#define PCIR_DEVICE_DEC_TULIP_PLUS	0x0014
#define PCIR_DEVICE_DEC_21142		0x0019
#define PCIR_DEVICE_DEC_21052		0x0021
#define PCIR_DEVICE_DEC_21150		0x0022
#define PCIR_DEVICE_DEC_21152		0x0024

#define PCIR_VENDOR_CIRRUS		0x1013
#define PCIR_DEVICE_CIRRUS_7548	0x0038
#define PCIR_DEVICE_CIRRUS_5430	0x00a0
#define PCIR_DEVICE_CIRRUS_5434_4	0x00a4
#define PCIR_DEVICE_CIRRUS_5434_8	0x00a8
#define PCIR_DEVICE_CIRRUS_5436	0x00ac
#define PCIR_DEVICE_CIRRUS_5446	0x00b8
#define PCIR_DEVICE_CIRRUS_5480	0x00bc
#define PCIR_DEVICE_CIRRUS_5464	0x00d4
#define PCIR_DEVICE_CIRRUS_5465	0x00d6
#define PCIR_DEVICE_CIRRUS_6729	0x1100
#define PCIR_DEVICE_CIRRUS_6832	0x1110
#define PCIR_DEVICE_CIRRUS_7542	0x1200
#define PCIR_DEVICE_CIRRUS_7543	0x1202
#define PCIR_DEVICE_CIRRUS_7541	0x1204

#define PCIR_VENDOR_IBM		0x1014
#define PCIR_DEVICE_IBM_FIRE_CORAL	0x000a
#define PCIR_DEVICE_IBM_TR		0x0018
#define PCIR_DEVICE_IBM_82G2675	0x001d
#define PCIR_DEVICE_IBM_MCA		0x0020
#define PCIR_DEVICE_IBM_82351		0x0022
#define PCIR_DEVICE_IBM_SERVERAID	0x002e
#define PCIR_DEVICE_IBM_TR_WAKE	0x003e
#define PCIR_DEVICE_IBM_MPIC		0x0046
#define PCIR_DEVICE_IBM_3780IDSP	0x007d
#define PCIR_DEVICE_IBM_MPIC_2	0xffff

#define PCIR_VENDOR_WD		0x101c
#define PCIR_DEVICE_WD_7197		0x3296

#define PCIR_VENDOR_AMD		0x1022
#define PCIR_DEVICE_AMD_LANCE		0x2000
#define PCIR_DEVICE_AMD_SCSI		0x2020

#define PCIR_VENDOR_TRIDENT		0x1023
#define PCIR_DEVICE_TRIDENT_9397	0x9397
#define PCIR_DEVICE_TRIDENT_9420	0x9420
#define PCIR_DEVICE_TRIDENT_9440	0x9440
#define PCIR_DEVICE_TRIDENT_9660	0x9660
#define PCIR_DEVICE_TRIDENT_9750	0x9750

#define PCIR_VENDOR_AI		0x1025
#define PCIR_DEVICE_AI_M1435		0x1435

#define PCIR_VENDOR_MATROX		0x102B
#define PCIR_DEVICE_MATROX_MGA_2	0x0518
#define PCIR_DEVICE_MATROX_MIL	0x0519
#define PCIR_DEVICE_MATROX_MYS	0x051A
#define PCIR_DEVICE_MATROX_MIL_2	0x051b
#define PCIR_DEVICE_MATROX_MIL_2_AGP	0x051f
#define PCIR_DEVICE_MATROX_MGA_IMP	0x0d10

#define PCIR_VENDOR_CT		0x102c
#define PCIR_DEVICE_CT_65545		0x00d8
#define PCIR_DEVICE_CT_65548		0x00dc
#define PCIR_DEVICE_CT_65550		0x00e0
#define PCIR_DEVICE_CT_65554		0x00e4
#define PCIR_DEVICE_CT_65555		0x00e5

#define PCIR_VENDOR_MIRO		0x1031
#define PCIR_DEVICE_MIRO_36050	0x5601

#define PCIR_VENDOR_NEC		0x1033
#define PCIR_DEVICE_NEC_PCX2		0x0046

#define PCIR_VENDOR_FD		0x1036
#define PCIR_DEVICE_FD_36C70		0x0000

#define PCIR_VENDOR_SI		0x1039
#define PCIR_DEVICE_SI_5591_AGP	0x0001
#define PCIR_DEVICE_SI_6202		0x0002
#define PCIR_DEVICE_SI_503		0x0008
#define PCIR_DEVICE_SI_ACPI		0x0009
#define PCIR_DEVICE_SI_5597_VGA	0x0200
#define PCIR_DEVICE_SI_6205		0x0205
#define PCIR_DEVICE_SI_501		0x0406
#define PCIR_DEVICE_SI_496		0x0496
#define PCIR_DEVICE_SI_601		0x0601
#define PCIR_DEVICE_SI_5107		0x5107
#define PCIR_DEVICE_SI_5511		0x5511
#define PCIR_DEVICE_SI_5513		0x5513
#define PCIR_DEVICE_SI_5571		0x5571
#define PCIR_DEVICE_SI_5591		0x5591
#define PCIR_DEVICE_SI_5597		0x5597
#define PCIR_DEVICE_SI_7001		0x7001

#define PCIR_VENDOR_HP		0x103c
#define PCIR_DEVICE_HP_J2585A		0x1030
#define PCIR_DEVICE_HP_J2585B		0x1031

#define PCIR_VENDOR_PCTECH		0x1042
#define PCIR_DEVICE_PCTECH_RZ1000	0x1000
#define PCIR_DEVICE_PCTECH_RZ1001	0x1001
#define PCIR_DEVICE_PCTECH_SAMURAI_0	0x3000
#define PCIR_DEVICE_PCTECH_SAMURAI_1	0x3010
#define PCIR_DEVICE_PCTECH_SAMURAI_IDE 0x3020

#define PCIR_VENDOR_DPT               0x1044
#define PCIR_DEVICE_DPT               0xa400

#define PCIR_VENDOR_OPTI		0x1045
#define PCIR_DEVICE_OPTI_92C178	0xc178
#define PCIR_DEVICE_OPTI_82C557	0xc557
#define PCIR_DEVICE_OPTI_82C558	0xc558
#define PCIR_DEVICE_OPTI_82C621	0xc621
#define PCIR_DEVICE_OPTI_82C700	0xc700
#define PCIR_DEVICE_OPTI_82C701	0xc701
#define PCIR_DEVICE_OPTI_82C814	0xc814
#define PCIR_DEVICE_OPTI_82C822	0xc822
#define PCIR_DEVICE_OPTI_82C825	0xd568

#define PCIR_VENDOR_SGS		0x104a
#define PCIR_DEVICE_SGS_2000		0x0008
#define PCIR_DEVICE_SGS_1764		0x0009

#define PCIR_VENDOR_BUSLOGIC		      0x104B
#define PCIR_DEVICE_BUSLOGIC_MULTIMASTER_NC 0x0140
#define PCIR_DEVICE_BUSLOGIC_MULTIMASTER    0x1040
#define PCIR_DEVICE_BUSLOGIC_FLASHPOINT     0x8130

#define PCIR_VENDOR_TI		0x104c
#define PCIR_DEVICE_TI_TVP4010	0x3d04
#define PCIR_DEVICE_TI_TVP4020	0x3d07
#define PCIR_DEVICE_TI_PCI1130	0xac12
#define PCIR_DEVICE_TI_PCI1031	0xac13
#define PCIR_DEVICE_TI_PCI1131	0xac15
#define PCIR_DEVICE_TI_PCI1250	0xac16
#define PCIR_DEVICE_TI_PCI1220	0xac17

#define PCIR_VENDOR_OAK		0x104e
#define PCIR_DEVICE_OAK_OTI107	0x0107

/* Winbond have two vendor IDs! See 0x10ad as well */
#define PCIR_VENDOR_WINBOND2		0x1050
#define PCIR_DEVICE_WINBOND2_89C940	0x0940

#define PCIR_VENDOR_MOTOROLA		0x1057
#define PCIR_DEVICE_MOTOROLA_MPC105	0x0001
#define PCIR_DEVICE_MOTOROLA_MPC106	0x0002
#define PCIR_DEVICE_MOTOROLA_RAVEN	0x4801

#define PCIR_VENDOR_PROMISE		0x105a
#define PCIR_DEVICE_PROMISE_20246	0x4d33
#define PCIR_DEVICE_PROMISE_5300	0x5300

#define PCIR_VENDOR_N9		0x105d
#define PCIR_DEVICE_N9_I128		0x2309
#define PCIR_DEVICE_N9_I128_2		0x2339
#define PCIR_DEVICE_N9_I128_T2R	0x493d

#define PCIR_VENDOR_UMC		0x1060
#define PCIR_DEVICE_UMC_UM8673F	0x0101
#define PCIR_DEVICE_UMC_UM8891A	0x0891
#define PCIR_DEVICE_UMC_UM8886BF	0x673a
#define PCIR_DEVICE_UMC_UM8886A	0x886a
#define PCIR_DEVICE_UMC_UM8881F	0x8881
#define PCIR_DEVICE_UMC_UM8886F	0x8886
#define PCIR_DEVICE_UMC_UM9017F	0x9017
#define PCIR_DEVICE_UMC_UM8886N	0xe886
#define PCIR_DEVICE_UMC_UM8891N	0xe891

#define PCIR_VENDOR_X			0x1061
#define PCIR_DEVICE_X_AGX016		0x0001

#define PCIR_VENDOR_PICOP		0x1066
#define PCIR_DEVICE_PICOP_PT86C52X	0x0001
#define PCIR_DEVICE_PICOP_PT80C524	0x8002

#define PCIR_VENDOR_APPLE		0x106b
#define PCIR_DEVICE_APPLE_BANDIT	0x0001
#define PCIR_DEVICE_APPLE_GC		0x0002
#define PCIR_DEVICE_APPLE_HYDRA	0x000e

#define PCIR_VENDOR_NEXGEN		0x1074
#define PCIR_DEVICE_NEXGEN_82C501	0x4e78

#define PCIR_VENDOR_QLOGIC		0x1077
#define PCIR_DEVICE_QLOGIC_ISP1020	0x1020
#define PCIR_DEVICE_QLOGIC_ISP1022	0x1022

#define PCIR_VENDOR_CYRIX		0x1078
#define PCIR_DEVICE_CYRIX_5510	0x0000
#define PCIR_DEVICE_CYRIX_PCI_MASTER	0x0001
#define PCIR_DEVICE_CYRIX_5520	0x0002
#define PCIR_DEVICE_CYRIX_5530_LEGACY	0x0100
#define PCIR_DEVICE_CYRIX_5530_SMI	0x0101
#define PCIR_DEVICE_CYRIX_5530_IDE	0x0102
#define PCIR_DEVICE_CYRIX_5530_AUDIO	0x0103
#define PCIR_DEVICE_CYRIX_5530_VIDEO	0x0104

#define PCIR_VENDOR_LEADTEK		0x107d
#define PCIR_DEVICE_LEADTEK_805	0x0000

#define PCIR_VENDOR_CONTAQ		0x1080
#define PCIR_DEVICE_CONTAQ_82C599	0x0600
#define PCIR_DEVICE_CONTAQ_82C693	0xc693

#define PCIR_VENDOR_FOREX		0x1083

#define PCIR_VENDOR_OLICOM		0x108d
#define PCIR_DEVICE_OLICOM_OC3136	0x0001
#define PCIR_DEVICE_OLICOM_OC2315	0x0011
#define PCIR_DEVICE_OLICOM_OC2325	0x0012
#define PCIR_DEVICE_OLICOM_OC2183	0x0013
#define PCIR_DEVICE_OLICOM_OC2326	0x0014
#define PCIR_DEVICE_OLICOM_OC6151	0x0021

#define PCIR_VENDOR_SUN		0x108e
#define PCIR_DEVICE_SUN_EBUS		0x1000
#define PCIR_DEVICE_SUN_HAPPYMEAL	0x1001
#define PCIR_DEVICE_SUN_SIMBA		0x5000
#define PCIR_DEVICE_SUN_PBM		0x8000
#define PCIR_DEVICE_SUN_SABRE		0xa000

#define PCIR_VENDOR_CMD		0x1095
#define PCIR_DEVICE_CMD_640		0x0640
#define PCIR_DEVICE_CMD_643		0x0643
#define PCIR_DEVICE_CMD_646		0x0646
#define PCIR_DEVICE_CMD_647		0x0647
#define PCIR_DEVICE_CMD_670		0x0670

#define PCIR_VENDOR_VISION		0x1098
#define PCIR_DEVICE_VISION_QD8500	0x0001
#define PCIR_DEVICE_VISION_QD8580	0x0002

#define PCIR_VENDOR_BROOKTREE		0x109e
#define PCIR_DEVICE_BROOKTREE_848	0x0350
#define PCIR_DEVICE_BROOKTREE_849A	0x0351
#define PCIR_DEVICE_BROOKTREE_8474	0x8474

#define PCIR_VENDOR_SIERRA		0x10a8
#define PCIR_DEVICE_SIERRA_STB	0x0000

#define PCIR_VENDOR_ACC		0x10aa
#define PCIR_DEVICE_ACC_2056		0x0000

#define PCIR_VENDOR_WINBOND		0x10ad
#define PCIR_DEVICE_WINBOND_83769	0x0001
#define PCIR_DEVICE_WINBOND_82C105	0x0105
#define PCIR_DEVICE_WINBOND_83C553	0x0565

#define PCIR_VENDOR_DATABOOK		0x10b3
#define PCIR_DEVICE_DATABOOK_87144	0xb106

#define PCIR_VENDOR_PLX		0x10b5
#define PCIR_DEVICE_PLX_9050		0x9050
#define PCIR_DEVICE_PLX_9060		0x9060
#define PCIR_DEVICE_PLX_9060ES	0x906E
#define PCIR_DEVICE_PLX_9060SD	0x906D
#define PCIR_DEVICE_PLX_9080		0x9080

#define PCIR_VENDOR_MADGE		0x10b6
#define PCIR_DEVICE_MADGE_MK2		0x0002
#define PCIR_DEVICE_MADGE_C155S	0x1001

#define PCIR_VENDOR_3COM		0x10b7
#define PCIR_DEVICE_3COM_3C339	0x3390
#define PCIR_DEVICE_3COM_3C590	0x5900
#define PCIR_DEVICE_3COM_3C595TX	0x5950
#define PCIR_DEVICE_3COM_3C595T4	0x5951
#define PCIR_DEVICE_3COM_3C595MII	0x5952
#define PCIR_DEVICE_3COM_3C900TPO	0x9000
#define PCIR_DEVICE_3COM_3C900COMBO	0x9001
#define PCIR_DEVICE_3COM_3C905TX	0x9050
#define PCIR_DEVICE_3COM_3C905T4	0x9051
#define PCIR_DEVICE_3COM_3C905B_TX	0x9055

#define PCIR_VENDOR_SMC		0x10b8
#define PCIR_DEVICE_SMC_EPIC100	0x0005

#define PCIR_VENDOR_AL		0x10b9
#define PCIR_DEVICE_AL_M1445		0x1445
#define PCIR_DEVICE_AL_M1449		0x1449
#define PCIR_DEVICE_AL_M1451		0x1451
#define PCIR_DEVICE_AL_M1461		0x1461
#define PCIR_DEVICE_AL_M1489		0x1489
#define PCIR_DEVICE_AL_M1511		0x1511
#define PCIR_DEVICE_AL_M1513		0x1513
#define PCIR_DEVICE_AL_M1521		0x1521
#define PCIR_DEVICE_AL_M1523		0x1523
#define PCIR_DEVICE_AL_M1531		0x1531
#define PCIR_DEVICE_AL_M1533		0x1533
#define PCIR_DEVICE_AL_M3307		0x3307
#define PCIR_DEVICE_AL_M4803		0x5215
#define PCIR_DEVICE_AL_M5219		0x5219
#define PCIR_DEVICE_AL_M5229		0x5229
#define PCIR_DEVICE_AL_M5237		0x5237
#define PCIR_DEVICE_AL_M7101		0x7101

#define PCIR_VENDOR_MITSUBISHI	0x10ba

#define PCIR_VENDOR_SURECOM		0x10bd
#define PCIR_DEVICE_SURECOM_NE34	0x0e34

#define PCIR_VENDOR_NEOMAGIC          0x10c8
#define PCIR_DEVICE_NEOMAGIC_MAGICGRAPH_NM2070 0x0001
#define PCIR_DEVICE_NEOMAGIC_MAGICGRAPH_128V 0x0002
#define PCIR_DEVICE_NEOMAGIC_MAGICGRAPH_128ZV 0x0003
#define PCIR_DEVICE_NEOMAGIC_MAGICGRAPH_NM2160 0x0004

#define PCIR_VENDOR_ASP		0x10cd
#define PCIR_DEVICE_ASP_ABP940	0x1200
#define PCIR_DEVICE_ASP_ABP940U	0x1300
#define PCIR_DEVICE_ASP_ABP940UW	0x2300

#define PCIR_VENDOR_MACRONIX		0x10d9
#define PCIR_DEVICE_MACRONIX_MX98713	0x0512
#define PCIR_DEVICE_MACRONIX_MX987x5	0x0531

#define PCIR_VENDOR_CERN		0x10dc
#define PCIR_DEVICE_CERN_SPSB_PMC	0x0001
#define PCIR_DEVICE_CERN_SPSB_PCI	0x0002
#define PCIR_DEVICE_CERN_HIPPI_DST	0x0021
#define PCIR_DEVICE_CERN_HIPPI_SRC	0x0022

#define PCIR_VENDOR_NVIDIA		0x10de

#define PCIR_VENDOR_IMS		0x10e0
#define PCIR_DEVICE_IMS_8849		0x8849

#define PCIR_VENDOR_TEKRAM2		0x10e1
#define PCIR_DEVICE_TEKRAM2_690c	0x690c

#define PCIR_VENDOR_TUNDRA		0x10e3
#define PCIR_DEVICE_TUNDRA_CA91C042	0x0000

#define PCIR_VENDOR_AMCC		0x10e8
#define PCIR_DEVICE_AMCC_MYRINET	0x8043
#define PCIR_DEVICE_AMCC_PARASTATION	0x8062
#define PCIR_DEVICE_AMCC_S5933	0x807d
#define PCIR_DEVICE_AMCC_S5933_HEPC3	0x809c

#define PCIR_VENDOR_INTERG		0x10ea
#define PCIR_DEVICE_INTERG_1680	0x1680
#define PCIR_DEVICE_INTERG_1682	0x1682

#define PCIR_VENDOR_REALTEK		0x10ec
#define PCIR_DEVICE_REALTEK_8029	0x8029
#define PCIR_DEVICE_REALTEK_8129	0x8129
#define PCIR_DEVICE_REALTEK_8139	0x8139

#define PCIR_VENDOR_TRUEVISION	0x10fa
#define PCIR_DEVICE_TRUEVISION_T1000	0x000c

#define PCIR_VENDOR_INIT		0x1101
#define PCIR_DEVICE_INIT_320P		0x9100
#define PCIR_DEVICE_INIT_360P		0x9500

#define PCIR_VENDOR_TTI		0x1103
#define PCIR_DEVICE_TTI_HPT343	0x0003

#define PCIR_VENDOR_VIA		0x1106
#define PCIR_DEVICE_VIA_82C505	0x0505
#define PCIR_DEVICE_VIA_82C561	0x0561
#define PCIR_DEVICE_VIA_82C586_1	0x0571
#define PCIR_DEVICE_VIA_82C576	0x0576
#define PCIR_DEVICE_VIA_82C585	0x0585
#define PCIR_DEVICE_VIA_82C586_0	0x0586
#define PCIR_DEVICE_VIA_82C595	0x0595
#define PCIR_DEVICE_VIA_82C597_0	0x0597
#define PCIR_DEVICE_VIA_82C926	0x0926
#define PCIR_DEVICE_VIA_82C416	0x1571
#define PCIR_DEVICE_VIA_82C595_97	0x1595
#define PCIR_DEVICE_VIA_82C586_2	0x3038
#define PCIR_DEVICE_VIA_82C586_3	0x3040
#define PCIR_DEVICE_VIA_86C100A	0x6100
#define PCIR_DEVICE_VIA_82C597_1	0x8597

#define PCIR_VENDOR_VORTEX		0x1119
#define PCIR_DEVICE_VORTEX_GDT60x0	0x0000
#define PCIR_DEVICE_VORTEX_GDT6000B	0x0001
#define PCIR_DEVICE_VORTEX_GDT6x10	0x0002
#define PCIR_DEVICE_VORTEX_GDT6x20	0x0003
#define PCIR_DEVICE_VORTEX_GDT6530	0x0004
#define PCIR_DEVICE_VORTEX_GDT6550	0x0005
#define PCIR_DEVICE_VORTEX_GDT6x17	0x0006
#define PCIR_DEVICE_VORTEX_GDT6x27	0x0007
#define PCIR_DEVICE_VORTEX_GDT6537	0x0008
#define PCIR_DEVICE_VORTEX_GDT6557	0x0009
#define PCIR_DEVICE_VORTEX_GDT6x15	0x000a
#define PCIR_DEVICE_VORTEX_GDT6x25	0x000b
#define PCIR_DEVICE_VORTEX_GDT6535	0x000c
#define PCIR_DEVICE_VORTEX_GDT6555	0x000d
#define PCIR_DEVICE_VORTEX_GDT6x17RP	0x0100
#define PCIR_DEVICE_VORTEX_GDT6x27RP	0x0101
#define PCIR_DEVICE_VORTEX_GDT6537RP	0x0102
#define PCIR_DEVICE_VORTEX_GDT6557RP	0x0103
#define PCIR_DEVICE_VORTEX_GDT6x11RP	0x0104
#define PCIR_DEVICE_VORTEX_GDT6x21RP	0x0105
#define PCIR_DEVICE_VORTEX_GDT6x17RP1	0x0110
#define PCIR_DEVICE_VORTEX_GDT6x27RP1	0x0111
#define PCIR_DEVICE_VORTEX_GDT6537RP1	0x0112
#define PCIR_DEVICE_VORTEX_GDT6557RP1	0x0113
#define PCIR_DEVICE_VORTEX_GDT6x11RP1	0x0114
#define PCIR_DEVICE_VORTEX_GDT6x21RP1	0x0115
#define PCIR_DEVICE_VORTEX_GDT6x17RP2	0x0120
#define PCIR_DEVICE_VORTEX_GDT6x27RP2	0x0121
#define PCIR_DEVICE_VORTEX_GDT6537RP2	0x0122
#define PCIR_DEVICE_VORTEX_GDT6557RP2	0x0123
#define PCIR_DEVICE_VORTEX_GDT6x11RP2	0x0124
#define PCIR_DEVICE_VORTEX_GDT6x21RP2	0x0125

#define PCIR_VENDOR_EF		0x111a
#define PCIR_DEVICE_EF_ATM_FPGA	0x0000
#define PCIR_DEVICE_EF_ATM_ASIC	0x0002

#define PCIR_VENDOR_FORE		0x1127
#define PCIR_DEVICE_FORE_PCA200PC	0x0210
#define PCIR_DEVICE_FORE_PCA200E	0x0300

#define PCIR_VENDOR_IMAGINGTECH	0x112f
#define PCIR_DEVICE_IMAGINGTECH_ICPCI	0x0000

#define PCIR_VENDOR_PHILIPS		0x1131
#define PCIR_DEVICE_PHILIPS_SAA7145	0x7145
#define PCIR_DEVICE_PHILIPS_SAA7146	0x7146

#define PCIR_VENDOR_CYCLONE		0x113c
#define PCIR_DEVICE_CYCLONE_SDK	0x0001

#define PCIR_VENDOR_ALLIANCE		0x1142
#define PCIR_DEVICE_ALLIANCE_PROMOTIO	0x3210
#define PCIR_DEVICE_ALLIANCE_PROVIDEO	0x6422
#define PCIR_DEVICE_ALLIANCE_AT24	0x6424
#define PCIR_DEVICE_ALLIANCE_AT3D	0x643d

#define PCIR_VENDOR_SK		0x1148
#define PCIR_DEVICE_SK_FP		0x4000
#define PCIR_DEVICE_SK_TR		0x4200
#define PCIR_DEVICE_SK_GE		0x4300

#define PCIR_VENDOR_VMIC		0x114a
#define PCIR_DEVICE_VMIC_VME		0x7587

#define PCIR_VENDOR_DIGI		0x114f
#define PCIR_DEVICE_DIGI_EPC		0x0002
#define PCIR_DEVICE_DIGI_RIGHTSWITCH	0x0003
#define PCIR_DEVICE_DIGI_XEM		0x0004
#define PCIR_DEVICE_DIGI_XR		0x0005
#define PCIR_DEVICE_DIGI_CX		0x0006
#define PCIR_DEVICE_DIGI_XRJ		0x0009
#define PCIR_DEVICE_DIGI_EPCJ		0x000a
#define PCIR_DEVICE_DIGI_XR_920	0x0027

#define PCIR_VENDOR_MUTECH		0x1159
#define PCIR_DEVICE_MUTECH_MV1000	0x0001

#define PCIR_VENDOR_RENDITION		0x1163
#define PCIR_DEVICE_RENDITION_VERITE	0x0001
#define PCIR_DEVICE_RENDITION_VERITE2100 0x2000

#define PCIR_VENDOR_TOSHIBA		0x1179
#define PCIR_DEVICE_TOSHIBA_601	0x0601
#define PCIR_DEVICE_TOSHIBA_TOPIC95	0x060a
#define PCIR_DEVICE_TOSHIBA_TOPIC97	0x060f

#define PCIR_VENDOR_RICOH		0x1180
#define PCIR_DEVICE_RICOH_RL5C465	0x0465
#define PCIR_DEVICE_RICOH_RL5C466	0x0466
#define PCIR_DEVICE_RICOH_RL5C475	0x0475
#define PCIR_DEVICE_RICOH_RL5C478	0x0478

#define PCIR_VENDOR_ARTOP		0x1191
#define PCIR_DEVICE_ARTOP_ATP8400	0x0004
#define PCIR_DEVICE_ARTOP_ATP850UF	0x0005

#define PCIR_VENDOR_ZEITNET		0x1193
#define PCIR_DEVICE_ZEITNET_1221	0x0001
#define PCIR_DEVICE_ZEITNET_1225	0x0002

#define PCIR_VENDOR_OMEGA		0x119b
#define PCIR_DEVICE_OMEGA_82C092G	0x1221

#define PCIR_VENDOR_LITEON		0x11ad
#define PCIR_DEVICE_LITEON_LNE100TX	0x0002

#define PCIR_VENDOR_NP		0x11bc
#define PCIR_DEVICE_NP_PCI_FDDI	0x0001

#define PCIR_VENDOR_ATT		0x11c1
#define PCIR_DEVICE_ATT_L56XMF	0x0440

#define PCIR_VENDOR_SPECIALIX		0x11cb
#define PCIR_DEVICE_SPECIALIX_IO8	0x2000
#define PCIR_DEVICE_SPECIALIX_XIO	0x4000
#define PCIR_DEVICE_SPECIALIX_RIO	0x8000

#define PCIR_VENDOR_AURAVISION	0x11d1
#define PCIR_DEVICE_AURAVISION_VXP524	0x01f7

#define PCIR_VENDOR_IKON		0x11d5
#define PCIR_DEVICE_IKON_10115	0x0115
#define PCIR_DEVICE_IKON_10117	0x0117

#define PCIR_VENDOR_ZORAN		0x11de
#define PCIR_DEVICE_ZORAN_36057	0x6057
#define PCIR_DEVICE_ZORAN_36120	0x6120

#define PCIR_VENDOR_KINETIC		0x11f4
#define PCIR_DEVICE_KINETIC_2915	0x2915

#define PCIR_VENDOR_COMPEX		0x11f6
#define PCIR_DEVICE_COMPEX_ENET100VG4	0x0112
#define PCIR_DEVICE_COMPEX_RL2000	0x1401

#define PCIR_VENDOR_RP               0x11fe
#define PCIR_DEVICE_RP32INTF         0x0001
#define PCIR_DEVICE_RP8INTF          0x0002
#define PCIR_DEVICE_RP16INTF         0x0003
#define PCIR_DEVICE_RP4QUAD	       0x0004
#define PCIR_DEVICE_RP8OCTA          0x0005
#define PCIR_DEVICE_RP8J	       0x0006
#define PCIR_DEVICE_RPP4	       0x000A
#define PCIR_DEVICE_RPP8	       0x000B
#define PCIR_DEVICE_RP8M	       0x000C

#define PCIR_VENDOR_CYCLADES		0x120e
#define PCIR_DEVICE_CYCLOM_Y_Lo	0x0100
#define PCIR_DEVICE_CYCLOM_Y_Hi	0x0101
#define PCIR_DEVICE_CYCLOM_Z_Lo	0x0200
#define PCIR_DEVICE_CYCLOM_Z_Hi	0x0201

#define PCIR_VENDOR_ESSENTIAL		0x120f
#define PCIR_DEVICE_ESSENTIAL_ROADRUNNER	0x0001

#define PCIR_VENDOR_O2		0x1217
#define PCIR_DEVICE_O2_6729		0x6729
#define PCIR_DEVICE_O2_6730		0x673a
#define PCIR_DEVICE_O2_6832		0x6832
#define PCIR_DEVICE_O2_6836		0x6836

#define PCIR_VENDOR_3DFX		0x121a
#define PCIR_DEVICE_3DFX_VOODOO	0x0001
#define PCIR_DEVICE_3DFX_VOODOO2	0x0002

#define PCIR_VENDOR_SIGMADES		0x1236
#define PCIR_DEVICE_SIGMADES_6425	0x6401

#define PCIR_VENDOR_CCUBE		0x123f

#define PCIR_VENDOR_DIPIX		0x1246

#define PCIR_VENDOR_STALLION		0x124d
#define PCIR_DEVICE_STALLION_ECHPCI832 0x0000
#define PCIR_DEVICE_STALLION_ECHPCI864 0x0002
#define PCIR_DEVICE_STALLION_EIOPCI	0x0003

#define PCIR_VENDOR_OPTIBASE		0x1255
#define PCIR_DEVICE_OPTIBASE_FORGE	0x1110
#define PCIR_DEVICE_OPTIBASE_FUSION	0x1210
#define PCIR_DEVICE_OPTIBASE_VPLEX	0x2110
#define PCIR_DEVICE_OPTIBASE_VPLEXCC	0x2120
#define PCIR_DEVICE_OPTIBASE_VQUEST	0x2130

#define PCIR_VENDOR_SATSAGEM		0x1267
#define PCIR_DEVICE_SATSAGEM_PCR2101	0x5352
#define PCIR_DEVICE_SATSAGEM_TELSATTURBO 0x5a4b

#define PCIR_VENDOR_HUGHES		0x1273
#define PCIR_DEVICE_HUGHES_DIRECPC	0x0002

#define PCIR_VENDOR_ENSONIQ		0x1274
#define PCIR_DEVICE_ENSONIQ_AUDIOPCI	0x5000

#define PCIR_VENDOR_ALTEON		0x12ae
#define PCIR_DEVICE_ALTEON_ACENIC	0x0001

#define PCIR_VENDOR_PICTUREL		0x12c5
#define PCIR_DEVICE_PICTUREL_PCIVST	0x0081

#define PCIR_VENDOR_NVIDIA_SGS	0x12d2
#define PCIR_DEVICE_NVIDIA_SGS_RIVA128 0x0018

#define PCIR_VENDOR_CBOARDS		0x1307
#define PCIR_DEVICE_CBOARDS_DAS1602_16 0x0001

#define PCIR_VENDOR_SYMPHONY		0x1c1c
#define PCIR_DEVICE_SYMPHONY_101	0x0001

#define PCIR_VENDOR_TEKRAM		0x1de1
#define PCIR_DEVICE_TEKRAM_DC290	0xdc29

#define PCIR_VENDOR_3DLABS		0x3d3d
#define PCIR_DEVICE_3DLABS_300SX	0x0001
#define PCIR_DEVICE_3DLABS_500TX	0x0002
#define PCIR_DEVICE_3DLABS_DELTA	0x0003
#define PCIR_DEVICE_3DLABS_PERMEDIA	0x0004
#define PCIR_DEVICE_3DLABS_MX		0x0006

#define PCIR_VENDOR_AVANCE		0x4005
#define PCIR_DEVICE_AVANCE_ALG2064	0x2064
#define PCIR_DEVICE_AVANCE_2302	0x2302

#define PCIR_VENDOR_NETVIN		0x4a14
#define PCIR_DEVICE_NETVIN_NV5000SC	0x5000

#define PCIR_VENDOR_S3		0x5333
#define PCIR_DEVICE_S3_PLATO_PXS	0x0551
#define PCIR_DEVICE_S3_ViRGE		0x5631
#define PCIR_DEVICE_S3_TRIO		0x8811
#define PCIR_DEVICE_S3_AURORA64VP	0x8812
#define PCIR_DEVICE_S3_TRIO64UVP	0x8814
#define PCIR_DEVICE_S3_ViRGE_VX	0x883d
#define PCIR_DEVICE_S3_868		0x8880
#define PCIR_DEVICE_S3_928		0x88b0
#define PCIR_DEVICE_S3_864_1		0x88c0
#define PCIR_DEVICE_S3_864_2		0x88c1
#define PCIR_DEVICE_S3_964_1		0x88d0
#define PCIR_DEVICE_S3_964_2		0x88d1
#define PCIR_DEVICE_S3_968		0x88f0
#define PCIR_DEVICE_S3_TRIO64V2	0x8901
#define PCIR_DEVICE_S3_PLATO_PXG	0x8902
#define PCIR_DEVICE_S3_ViRGE_DXGX	0x8a01
#define PCIR_DEVICE_S3_ViRGE_GX2	0x8a10
#define PCIR_DEVICE_S3_ViRGE_MX	0x8c01
#define PCIR_DEVICE_S3_ViRGE_MXP	0x8c02
#define PCIR_DEVICE_S3_ViRGE_MXPMV	0x8c03
#define PCIR_DEVICE_S3_SONICVIBES	0xca00

#define PCIR_VENDOR_INTEL		0x8086
#define PCIR_DEVICE_INTEL_82375	0x0482
#define PCIR_DEVICE_INTEL_82424	0x0483
#define PCIR_DEVICE_INTEL_82378	0x0484
#define PCIR_DEVICE_INTEL_82430	0x0486
#define PCIR_DEVICE_INTEL_82434	0x04a3
#define PCIR_DEVICE_INTEL_82092AA_0	0x1221
#define PCIR_DEVICE_INTEL_82092AA_1	0x1222
#define PCIR_DEVICE_INTEL_7116	0x1223
#define PCIR_DEVICE_INTEL_82596	0x1226
#define PCIR_DEVICE_INTEL_82865	0x1227
#define PCIR_DEVICE_INTEL_82557	0x1229
#define PCIR_DEVICE_INTEL_82437	0x122d
#define PCIR_DEVICE_INTEL_82371FB_0	0x122e
#define PCIR_DEVICE_INTEL_82371FB_1	0x1230
#define PCIR_DEVICE_INTEL_82371MX	0x1234
#define PCIR_DEVICE_INTEL_82437MX	0x1235
#define PCIR_DEVICE_INTEL_82441	0x1237
#define PCIR_DEVICE_INTEL_82380FB	0x124b
#define PCIR_DEVICE_INTEL_82439	0x1250
#define PCIR_DEVICE_INTEL_82371SB_0	0x7000
#define PCIR_DEVICE_INTEL_82371SB_1	0x7010
#define PCIR_DEVICE_INTEL_82371SB_2	0x7020
#define PCIR_DEVICE_INTEL_82437VX	0x7030
#define PCIR_DEVICE_INTEL_82439TX	0x7100
#define PCIR_DEVICE_INTEL_82371AB_0	0x7110
#define PCIR_DEVICE_INTEL_82371AB	0x7111
#define PCIR_DEVICE_INTEL_82371AB_2	0x7112
#define PCIR_DEVICE_INTEL_82371AB_3	0x7113
#define PCIR_DEVICE_INTEL_82443LX_0	0x7180
#define PCIR_DEVICE_INTEL_82443LX_1	0x7181
#define PCIR_DEVICE_INTEL_82443BX_0	0x7190
#define PCIR_DEVICE_INTEL_82443BX_1	0x7191
#define PCIR_DEVICE_INTEL_82443BX_2	0x7192
#define PCIR_DEVICE_INTEL_P6		0x84c4
#define PCIR_DEVICE_INTEL_82450GX	0x84c5

#define PCIR_VENDOR_KTI		0x8e2e
#define PCIR_DEVICE_KTI_ET32P2	0x3000

#define PCIR_VENDOR_ADAPTEC		0x9004
#define PCIR_DEVICE_ADAPTEC_7810	0x1078
#define PCIR_DEVICE_ADAPTEC_7850	0x5078
#define PCIR_DEVICE_ADAPTEC_7855	0x5578
#define PCIR_DEVICE_ADAPTEC_5800	0x5800
#define PCIR_DEVICE_ADAPTEC_1480A	0x6075
#define PCIR_DEVICE_ADAPTEC_7860	0x6078
#define PCIR_DEVICE_ADAPTEC_7861	0x6178
#define PCIR_DEVICE_ADAPTEC_7870	0x7078
#define PCIR_DEVICE_ADAPTEC_7871	0x7178
#define PCIR_DEVICE_ADAPTEC_7872	0x7278
#define PCIR_DEVICE_ADAPTEC_7873	0x7378
#define PCIR_DEVICE_ADAPTEC_7874	0x7478
#define PCIR_DEVICE_ADAPTEC_7895	0x7895
#define PCIR_DEVICE_ADAPTEC_7880	0x8078
#define PCIR_DEVICE_ADAPTEC_7881	0x8178
#define PCIR_DEVICE_ADAPTEC_7882	0x8278
#define PCIR_DEVICE_ADAPTEC_7883	0x8378
#define PCIR_DEVICE_ADAPTEC_7884	0x8478
#define PCIR_DEVICE_ADAPTEC_1030	0x8b78

#define PCIR_VENDOR_ADAPTEC2		0x9005
#define PCIR_DEVICE_ADAPTEC2_2940U2	0x0010
#define PCIR_DEVICE_ADAPTEC2_7890	0x001f
#define PCIR_DEVICE_ADAPTEC2_3940U2	0x0050
#define PCIR_DEVICE_ADAPTEC2_7896	0x005f

#define PCIR_VENDOR_ATRONICS		0x907f
#define PCIR_DEVICE_ATRONICS_2015	0x2015

#define PCIR_VENDOR_HOLTEK		0x9412
#define PCIR_DEVICE_HOLTEK_6565	0x6565

#define PCIR_VENDOR_TIGERJET		0xe159
#define PCIR_DEVICE_TIGERJET_300	0x0001

#define PCIR_VENDOR_ARK		0xedd8
#define PCIR_DEVICE_ARK_STING		0xa091
#define PCIR_DEVICE_ARK_STINGARK	0xa099
#define PCIR_DEVICE_ARK_2000MT	0xa0a1

#endif /* !__PCI_IDS_H__ */
