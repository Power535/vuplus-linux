/***************************************************************************
 *     Copyright (c) 1999-2012, Broadcom Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 20 15:36:28 2012
 *                 MD5 Checksum         d41d8cd98f00b204e9800998ecf8427e
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: $
 *
 ***************************************************************************/

#ifndef BCHP_USB1_CTRL_H__
#define BCHP_USB1_CTRL_H__

/***************************************************************************
 *USB1_CTRL - USB Control Registers
 ***************************************************************************/
#define BCHP_USB1_CTRL_SETUP                     0x00490200 /* Setup Register */
#define BCHP_USB1_CTRL_PLL_CTL                   0x00490204 /* PLL Control Register */
#define BCHP_USB1_CTRL_FLADJ_VALUE               0x00490208 /* Frame Adjust Value */
#define BCHP_USB1_CTRL_EBRIDGE                   0x0049020c /* Control Register for EHCI Bridge */
#define BCHP_USB1_CTRL_OBRIDGE                   0x00490210 /* Control Register for OHCI Bridge */
#define BCHP_USB1_CTRL_MDIO                      0x00490214 /* MDIO Interface Programming Register */
#define BCHP_USB1_CTRL_MDIO2                     0x00490218 /* MDIO Interface Read Register */
#define BCHP_USB1_CTRL_TEST_PORT_CTL             0x0049021c /* Test Port Control Register */
#define BCHP_USB1_CTRL_USB_SIMCTL                0x00490220 /* Simulation Register */
#define BCHP_USB1_CTRL_USB_TESTCTL               0x00490224 /* Throutput Test Control */
#define BCHP_USB1_CTRL_USB_TESTMON               0x00490228 /* Throughput Test Monitor */
#define BCHP_USB1_CTRL_UTMI_CTL_1                0x0049022c /* UTMI Control Register */
#define BCHP_USB1_CTRL_UTMI_CTL_2                0x00490230 /* UTMI Control 2 Register */
#define BCHP_USB1_CTRL_SPARE1                    0x00490234 /* Spare1 Register for future use */
#define BCHP_USB1_CTRL_SPARE2                    0x00490238 /* Spare2 Register for future use */

/***************************************************************************
 *SETUP - Setup Register
 ***************************************************************************/
/* USB1_CTRL :: SETUP :: OC_DISABLE [31:28] */
#define BCHP_USB1_CTRL_SETUP_OC_DISABLE_MASK                       0xf0000000
#define BCHP_USB1_CTRL_SETUP_OC_DISABLE_SHIFT                      28
#define BCHP_USB1_CTRL_SETUP_OC_DISABLE_DEFAULT                    0x00000000

/* USB1_CTRL :: SETUP :: SRAM_CS_DIS [27:25] */
#define BCHP_USB1_CTRL_SETUP_SRAM_CS_DIS_MASK                      0x0e000000
#define BCHP_USB1_CTRL_SETUP_SRAM_CS_DIS_SHIFT                     25
#define BCHP_USB1_CTRL_SETUP_SRAM_CS_DIS_DEFAULT                   0x00000000

/* USB1_CTRL :: SETUP :: SETUP_SPARE [24:15] */
#define BCHP_USB1_CTRL_SETUP_SETUP_SPARE_MASK                      0x01ff8000
#define BCHP_USB1_CTRL_SETUP_SETUP_SPARE_SHIFT                     15
#define BCHP_USB1_CTRL_SETUP_SETUP_SPARE_DEFAULT                   0x00000000

/* USB1_CTRL :: SETUP :: scb1_en [14:14] */
#define BCHP_USB1_CTRL_SETUP_scb1_en_MASK                          0x00004000
#define BCHP_USB1_CTRL_SETUP_scb1_en_SHIFT                         14
#define BCHP_USB1_CTRL_SETUP_scb1_en_DEFAULT                       0x00000000

/* USB1_CTRL :: SETUP :: scb_client_swap [13:13] */
#define BCHP_USB1_CTRL_SETUP_scb_client_swap_MASK                  0x00002000
#define BCHP_USB1_CTRL_SETUP_scb_client_swap_SHIFT                 13
#define BCHP_USB1_CTRL_SETUP_scb_client_swap_DEFAULT               0x00000000

/* USB1_CTRL :: SETUP :: async_expire_dis [12:12] */
#define BCHP_USB1_CTRL_SETUP_async_expire_dis_MASK                 0x00001000
#define BCHP_USB1_CTRL_SETUP_async_expire_dis_SHIFT                12
#define BCHP_USB1_CTRL_SETUP_async_expire_dis_DEFAULT              0x00000000

/* USB1_CTRL :: SETUP :: discon_intr_en [11:11] */
#define BCHP_USB1_CTRL_SETUP_discon_intr_en_MASK                   0x00000800
#define BCHP_USB1_CTRL_SETUP_discon_intr_en_SHIFT                  11
#define BCHP_USB1_CTRL_SETUP_discon_intr_en_DEFAULT                0x00000000

/* USB1_CTRL :: SETUP :: con_intr_en [10:10] */
#define BCHP_USB1_CTRL_SETUP_con_intr_en_MASK                      0x00000400
#define BCHP_USB1_CTRL_SETUP_con_intr_en_SHIFT                     10
#define BCHP_USB1_CTRL_SETUP_con_intr_en_DEFAULT                   0x00000000

/* USB1_CTRL :: SETUP :: soft_shutdown [09:09] */
#define BCHP_USB1_CTRL_SETUP_soft_shutdown_MASK                    0x00000200
#define BCHP_USB1_CTRL_SETUP_soft_shutdown_SHIFT                   9
#define BCHP_USB1_CTRL_SETUP_soft_shutdown_DEFAULT                 0x00000000

/* USB1_CTRL :: SETUP :: utmi_bkward_en [08:08] */
#define BCHP_USB1_CTRL_SETUP_utmi_bkward_en_MASK                   0x00000100
#define BCHP_USB1_CTRL_SETUP_utmi_bkward_en_SHIFT                  8
#define BCHP_USB1_CTRL_SETUP_utmi_bkward_en_DEFAULT                0x00000000

/* USB1_CTRL :: SETUP :: utmi_pls_en [07:07] */
#define BCHP_USB1_CTRL_SETUP_utmi_pls_en_MASK                      0x00000080
#define BCHP_USB1_CTRL_SETUP_utmi_pls_en_SHIFT                     7
#define BCHP_USB1_CTRL_SETUP_utmi_pls_en_DEFAULT                   0x00000000

/* USB1_CTRL :: SETUP :: soft_reset [06:06] */
#define BCHP_USB1_CTRL_SETUP_soft_reset_MASK                       0x00000040
#define BCHP_USB1_CTRL_SETUP_soft_reset_SHIFT                      6
#define BCHP_USB1_CTRL_SETUP_soft_reset_DEFAULT                    0x00000000

/* USB1_CTRL :: SETUP :: IPP [05:05] */
#define BCHP_USB1_CTRL_SETUP_IPP_MASK                              0x00000020
#define BCHP_USB1_CTRL_SETUP_IPP_SHIFT                             5
#define BCHP_USB1_CTRL_SETUP_IPP_DEFAULT                           0x00000000

/* USB1_CTRL :: SETUP :: IOC [04:04] */
#define BCHP_USB1_CTRL_SETUP_IOC_MASK                              0x00000010
#define BCHP_USB1_CTRL_SETUP_IOC_SHIFT                             4
#define BCHP_USB1_CTRL_SETUP_IOC_DEFAULT                           0x00000000

/* USB1_CTRL :: SETUP :: WABO [03:03] */
#define BCHP_USB1_CTRL_SETUP_WABO_MASK                             0x00000008
#define BCHP_USB1_CTRL_SETUP_WABO_SHIFT                            3
#define BCHP_USB1_CTRL_SETUP_WABO_DEFAULT                          0x00000000

/* USB1_CTRL :: SETUP :: FNBO [02:02] */
#define BCHP_USB1_CTRL_SETUP_FNBO_MASK                             0x00000004
#define BCHP_USB1_CTRL_SETUP_FNBO_SHIFT                            2
#define BCHP_USB1_CTRL_SETUP_FNBO_DEFAULT                          0x00000000

/* USB1_CTRL :: SETUP :: FNHW [01:01] */
#define BCHP_USB1_CTRL_SETUP_FNHW_MASK                             0x00000002
#define BCHP_USB1_CTRL_SETUP_FNHW_SHIFT                            1
#define BCHP_USB1_CTRL_SETUP_FNHW_DEFAULT                          0x00000000

/* USB1_CTRL :: SETUP :: BABO [00:00] */
#define BCHP_USB1_CTRL_SETUP_BABO_MASK                             0x00000001
#define BCHP_USB1_CTRL_SETUP_BABO_SHIFT                            0
#define BCHP_USB1_CTRL_SETUP_BABO_DEFAULT                          0x00000000

/***************************************************************************
 *PLL_CTL - PLL Control Register
 ***************************************************************************/
/* USB1_CTRL :: PLL_CTL :: PLL_IDDQ_PWRDN [31:31] */
#define BCHP_USB1_CTRL_PLL_CTL_PLL_IDDQ_PWRDN_MASK                 0x80000000
#define BCHP_USB1_CTRL_PLL_CTL_PLL_IDDQ_PWRDN_SHIFT                31
#define BCHP_USB1_CTRL_PLL_CTL_PLL_IDDQ_PWRDN_DEFAULT              0x00000000

/* USB1_CTRL :: PLL_CTL :: PLL_RESETB [30:30] */
#define BCHP_USB1_CTRL_PLL_CTL_PLL_RESETB_MASK                     0x40000000
#define BCHP_USB1_CTRL_PLL_CTL_PLL_RESETB_SHIFT                    30
#define BCHP_USB1_CTRL_PLL_CTL_PLL_RESETB_DEFAULT                  0x00000001

/* USB1_CTRL :: PLL_CTL :: PHYPLL_BYP [29:29] */
#define BCHP_USB1_CTRL_PLL_CTL_PHYPLL_BYP_MASK                     0x20000000
#define BCHP_USB1_CTRL_PLL_CTL_PHYPLL_BYP_SHIFT                    29
#define BCHP_USB1_CTRL_PLL_CTL_PHYPLL_BYP_DEFAULT                  0x00000000

/* USB1_CTRL :: PLL_CTL :: PLL_PWRDWNB [28:28] */
#define BCHP_USB1_CTRL_PLL_CTL_PLL_PWRDWNB_MASK                    0x10000000
#define BCHP_USB1_CTRL_PLL_CTL_PLL_PWRDWNB_SHIFT                   28
#define BCHP_USB1_CTRL_PLL_CTL_PLL_PWRDWNB_DEFAULT                 0x00000001

/* USB1_CTRL :: PLL_CTL :: PLL_SUSPEND_EN [27:27] */
#define BCHP_USB1_CTRL_PLL_CTL_PLL_SUSPEND_EN_MASK                 0x08000000
#define BCHP_USB1_CTRL_PLL_CTL_PLL_SUSPEND_EN_SHIFT                27
#define BCHP_USB1_CTRL_PLL_CTL_PLL_SUSPEND_EN_DEFAULT              0x00000000

/* USB1_CTRL :: PLL_CTL :: PLL_Ka [26:24] */
#define BCHP_USB1_CTRL_PLL_CTL_PLL_Ka_MASK                         0x07000000
#define BCHP_USB1_CTRL_PLL_CTL_PLL_Ka_SHIFT                        24
#define BCHP_USB1_CTRL_PLL_CTL_PLL_Ka_DEFAULT                      0x00000001

/* USB1_CTRL :: PLL_CTL :: PLLCTL_SPARE3 [23:23] */
#define BCHP_USB1_CTRL_PLL_CTL_PLLCTL_SPARE3_MASK                  0x00800000
#define BCHP_USB1_CTRL_PLL_CTL_PLLCTL_SPARE3_SHIFT                 23
#define BCHP_USB1_CTRL_PLL_CTL_PLLCTL_SPARE3_DEFAULT               0x00000000

/* USB1_CTRL :: PLL_CTL :: PLL_Ki [22:20] */
#define BCHP_USB1_CTRL_PLL_CTL_PLL_Ki_MASK                         0x00700000
#define BCHP_USB1_CTRL_PLL_CTL_PLL_Ki_SHIFT                        20
#define BCHP_USB1_CTRL_PLL_CTL_PLL_Ki_DEFAULT                      0x00000002

/* USB1_CTRL :: PLL_CTL :: PLL_Kp [19:16] */
#define BCHP_USB1_CTRL_PLL_CTL_PLL_Kp_MASK                         0x000f0000
#define BCHP_USB1_CTRL_PLL_CTL_PLL_Kp_SHIFT                        16
#define BCHP_USB1_CTRL_PLL_CTL_PLL_Kp_DEFAULT                      0x00000007

/* USB1_CTRL :: PLL_CTL :: PLLCTL_SPARE2 [15:15] */
#define BCHP_USB1_CTRL_PLL_CTL_PLLCTL_SPARE2_MASK                  0x00008000
#define BCHP_USB1_CTRL_PLL_CTL_PLLCTL_SPARE2_SHIFT                 15
#define BCHP_USB1_CTRL_PLL_CTL_PLLCTL_SPARE2_DEFAULT               0x00000000

/* USB1_CTRL :: PLL_CTL :: PLL_pdiv [14:12] */
#define BCHP_USB1_CTRL_PLL_CTL_PLL_pdiv_MASK                       0x00007000
#define BCHP_USB1_CTRL_PLL_CTL_PLL_pdiv_SHIFT                      12
#define BCHP_USB1_CTRL_PLL_CTL_PLL_pdiv_DEFAULT                    0x00000001

/* USB1_CTRL :: PLL_CTL :: PLLCTL_SPARE1 [11:10] */
#define BCHP_USB1_CTRL_PLL_CTL_PLLCTL_SPARE1_MASK                  0x00000c00
#define BCHP_USB1_CTRL_PLL_CTL_PLLCTL_SPARE1_SHIFT                 10
#define BCHP_USB1_CTRL_PLL_CTL_PLLCTL_SPARE1_DEFAULT               0x00000000

/* USB1_CTRL :: PLL_CTL :: PLL_ndiv [09:00] */
#define BCHP_USB1_CTRL_PLL_CTL_PLL_ndiv_MASK                       0x000003ff
#define BCHP_USB1_CTRL_PLL_CTL_PLL_ndiv_SHIFT                      0
#define BCHP_USB1_CTRL_PLL_CTL_PLL_ndiv_DEFAULT                    0x00000050

/***************************************************************************
 *FLADJ_VALUE - Frame Adjust Value
 ***************************************************************************/
/* USB1_CTRL :: FLADJ_VALUE :: FLADJ_VAL [31:00] */
#define BCHP_USB1_CTRL_FLADJ_VALUE_FLADJ_VAL_MASK                  0xffffffff
#define BCHP_USB1_CTRL_FLADJ_VALUE_FLADJ_VAL_SHIFT                 0
#define BCHP_USB1_CTRL_FLADJ_VALUE_FLADJ_VAL_DEFAULT               0x000c0020

/***************************************************************************
 *EBRIDGE - Control Register for EHCI Bridge
 ***************************************************************************/
/* USB1_CTRL :: EBRIDGE :: EBR_SOFT_RESET [31:31] */
#define BCHP_USB1_CTRL_EBRIDGE_EBR_SOFT_RESET_MASK                 0x80000000
#define BCHP_USB1_CTRL_EBRIDGE_EBR_SOFT_RESET_SHIFT                31
#define BCHP_USB1_CTRL_EBRIDGE_EBR_SOFT_RESET_DEFAULT              0x00000000

/* USB1_CTRL :: EBRIDGE :: ebrff_reset [30:30] */
#define BCHP_USB1_CTRL_EBRIDGE_ebrff_reset_MASK                    0x40000000
#define BCHP_USB1_CTRL_EBRIDGE_ebrff_reset_SHIFT                   30
#define BCHP_USB1_CTRL_EBRIDGE_ebrff_reset_DEFAULT                 0x00000000

/* USB1_CTRL :: EBRIDGE :: ebr_wrgwordcnt_sel [29:29] */
#define BCHP_USB1_CTRL_EBRIDGE_ebr_wrgwordcnt_sel_MASK             0x20000000
#define BCHP_USB1_CTRL_EBRIDGE_ebr_wrgwordcnt_sel_SHIFT            29
#define BCHP_USB1_CTRL_EBRIDGE_ebr_wrgwordcnt_sel_DEFAULT          0x00000000

/* USB1_CTRL :: EBRIDGE :: ebr_size_sel [28:28] */
#define BCHP_USB1_CTRL_EBRIDGE_ebr_size_sel_MASK                   0x10000000
#define BCHP_USB1_CTRL_EBRIDGE_ebr_size_sel_SHIFT                  28
#define BCHP_USB1_CTRL_EBRIDGE_ebr_size_sel_DEFAULT                0x00000000

/* USB1_CTRL :: EBRIDGE :: EBR_SPARE [27:17] */
#define BCHP_USB1_CTRL_EBRIDGE_EBR_SPARE_MASK                      0x0ffe0000
#define BCHP_USB1_CTRL_EBRIDGE_EBR_SPARE_SHIFT                     17
#define BCHP_USB1_CTRL_EBRIDGE_EBR_SPARE_DEFAULT                   0x00000000

/* USB1_CTRL :: EBRIDGE :: EBR_RD_THRESH [16:12] */
#define BCHP_USB1_CTRL_EBRIDGE_EBR_RD_THRESH_MASK                  0x0001f000
#define BCHP_USB1_CTRL_EBRIDGE_EBR_RD_THRESH_SHIFT                 12
#define BCHP_USB1_CTRL_EBRIDGE_EBR_RD_THRESH_DEFAULT               0x00000002

/* USB1_CTRL :: EBRIDGE :: EBR_SCB_SIZE [11:07] */
#define BCHP_USB1_CTRL_EBRIDGE_EBR_SCB_SIZE_MASK                   0x00000f80
#define BCHP_USB1_CTRL_EBRIDGE_EBR_SCB_SIZE_SHIFT                  7
#define BCHP_USB1_CTRL_EBRIDGE_EBR_SCB_SIZE_DEFAULT                0x00000004

/* USB1_CTRL :: EBRIDGE :: EBR_MISC [06:01] */
#define BCHP_USB1_CTRL_EBRIDGE_EBR_MISC_MASK                       0x0000007e
#define BCHP_USB1_CTRL_EBRIDGE_EBR_MISC_SHIFT                      1
#define BCHP_USB1_CTRL_EBRIDGE_EBR_MISC_DEFAULT                    0x00000000

/* USB1_CTRL :: EBRIDGE :: EBR_SEQ_EN [00:00] */
#define BCHP_USB1_CTRL_EBRIDGE_EBR_SEQ_EN_MASK                     0x00000001
#define BCHP_USB1_CTRL_EBRIDGE_EBR_SEQ_EN_SHIFT                    0
#define BCHP_USB1_CTRL_EBRIDGE_EBR_SEQ_EN_DEFAULT                  0x00000000

/***************************************************************************
 *OBRIDGE - Control Register for OHCI Bridge
 ***************************************************************************/
/* USB1_CTRL :: OBRIDGE :: OBR_SOFT_RESET [31:31] */
#define BCHP_USB1_CTRL_OBRIDGE_OBR_SOFT_RESET_MASK                 0x80000000
#define BCHP_USB1_CTRL_OBRIDGE_OBR_SOFT_RESET_SHIFT                31
#define BCHP_USB1_CTRL_OBRIDGE_OBR_SOFT_RESET_DEFAULT              0x00000000

/* USB1_CTRL :: OBRIDGE :: obrff_reset [30:30] */
#define BCHP_USB1_CTRL_OBRIDGE_obrff_reset_MASK                    0x40000000
#define BCHP_USB1_CTRL_OBRIDGE_obrff_reset_SHIFT                   30
#define BCHP_USB1_CTRL_OBRIDGE_obrff_reset_DEFAULT                 0x00000000

/* USB1_CTRL :: OBRIDGE :: obr_wrgwordcnt_sel [29:29] */
#define BCHP_USB1_CTRL_OBRIDGE_obr_wrgwordcnt_sel_MASK             0x20000000
#define BCHP_USB1_CTRL_OBRIDGE_obr_wrgwordcnt_sel_SHIFT            29
#define BCHP_USB1_CTRL_OBRIDGE_obr_wrgwordcnt_sel_DEFAULT          0x00000000

/* USB1_CTRL :: OBRIDGE :: obr_size_sel [28:28] */
#define BCHP_USB1_CTRL_OBRIDGE_obr_size_sel_MASK                   0x10000000
#define BCHP_USB1_CTRL_OBRIDGE_obr_size_sel_SHIFT                  28
#define BCHP_USB1_CTRL_OBRIDGE_obr_size_sel_DEFAULT                0x00000000

/* USB1_CTRL :: OBRIDGE :: OBR_SPARE [27:17] */
#define BCHP_USB1_CTRL_OBRIDGE_OBR_SPARE_MASK                      0x0ffe0000
#define BCHP_USB1_CTRL_OBRIDGE_OBR_SPARE_SHIFT                     17
#define BCHP_USB1_CTRL_OBRIDGE_OBR_SPARE_DEFAULT                   0x00000000

/* USB1_CTRL :: OBRIDGE :: OBR_RD_THRESH [16:12] */
#define BCHP_USB1_CTRL_OBRIDGE_OBR_RD_THRESH_MASK                  0x0001f000
#define BCHP_USB1_CTRL_OBRIDGE_OBR_RD_THRESH_SHIFT                 12
#define BCHP_USB1_CTRL_OBRIDGE_OBR_RD_THRESH_DEFAULT               0x00000002

/* USB1_CTRL :: OBRIDGE :: OBR_SCB_SIZE [11:07] */
#define BCHP_USB1_CTRL_OBRIDGE_OBR_SCB_SIZE_MASK                   0x00000f80
#define BCHP_USB1_CTRL_OBRIDGE_OBR_SCB_SIZE_SHIFT                  7
#define BCHP_USB1_CTRL_OBRIDGE_OBR_SCB_SIZE_DEFAULT                0x00000004

/* USB1_CTRL :: OBRIDGE :: OBR_MISC [06:01] */
#define BCHP_USB1_CTRL_OBRIDGE_OBR_MISC_MASK                       0x0000007e
#define BCHP_USB1_CTRL_OBRIDGE_OBR_MISC_SHIFT                      1
#define BCHP_USB1_CTRL_OBRIDGE_OBR_MISC_DEFAULT                    0x00000000

/* USB1_CTRL :: OBRIDGE :: OBR_SEQ_EN [00:00] */
#define BCHP_USB1_CTRL_OBRIDGE_OBR_SEQ_EN_MASK                     0x00000001
#define BCHP_USB1_CTRL_OBRIDGE_OBR_SEQ_EN_SHIFT                    0
#define BCHP_USB1_CTRL_OBRIDGE_OBR_SEQ_EN_DEFAULT                  0x00000000

/***************************************************************************
 *MDIO - MDIO Interface Programming Register
 ***************************************************************************/
/* USB1_CTRL :: MDIO :: MDIO_CLK_SEL [31:31] */
#define BCHP_USB1_CTRL_MDIO_MDIO_CLK_SEL_MASK                      0x80000000
#define BCHP_USB1_CTRL_MDIO_MDIO_CLK_SEL_SHIFT                     31
#define BCHP_USB1_CTRL_MDIO_MDIO_CLK_SEL_DEFAULT                   0x00000000

/* USB1_CTRL :: MDIO :: MDIO_XVER_SELECT [30:29] */
#define BCHP_USB1_CTRL_MDIO_MDIO_XVER_SELECT_MASK                  0x60000000
#define BCHP_USB1_CTRL_MDIO_MDIO_XVER_SELECT_SHIFT                 29
#define BCHP_USB1_CTRL_MDIO_MDIO_XVER_SELECT_DEFAULT               0x00000000

/* USB1_CTRL :: MDIO :: MDIO_TERM_SELECT [28:28] */
#define BCHP_USB1_CTRL_MDIO_MDIO_TERM_SELECT_MASK                  0x10000000
#define BCHP_USB1_CTRL_MDIO_MDIO_TERM_SELECT_SHIFT                 28
#define BCHP_USB1_CTRL_MDIO_MDIO_TERM_SELECT_DEFAULT               0x00000000

/* USB1_CTRL :: MDIO :: MDIO_FS_XVER_OWN [27:27] */
#define BCHP_USB1_CTRL_MDIO_MDIO_FS_XVER_OWN_MASK                  0x08000000
#define BCHP_USB1_CTRL_MDIO_MDIO_FS_XVER_OWN_SHIFT                 27
#define BCHP_USB1_CTRL_MDIO_MDIO_FS_XVER_OWN_DEFAULT               0x00000000

/* USB1_CTRL :: MDIO :: MDIO_TESTMODE [26:26] */
#define BCHP_USB1_CTRL_MDIO_MDIO_TESTMODE_MASK                     0x04000000
#define BCHP_USB1_CTRL_MDIO_MDIO_TESTMODE_SHIFT                    26
#define BCHP_USB1_CTRL_MDIO_MDIO_TESTMODE_DEFAULT                  0x00000000

/* USB1_CTRL :: MDIO :: WR_START [25:25] */
#define BCHP_USB1_CTRL_MDIO_WR_START_MASK                          0x02000000
#define BCHP_USB1_CTRL_MDIO_WR_START_SHIFT                         25
#define BCHP_USB1_CTRL_MDIO_WR_START_DEFAULT                       0x00000000

/* USB1_CTRL :: MDIO :: RD_START [24:24] */
#define BCHP_USB1_CTRL_MDIO_RD_START_MASK                          0x01000000
#define BCHP_USB1_CTRL_MDIO_RD_START_SHIFT                         24
#define BCHP_USB1_CTRL_MDIO_RD_START_DEFAULT                       0x00000000

/* USB1_CTRL :: MDIO :: MDIO_ADDR [23:16] */
#define BCHP_USB1_CTRL_MDIO_MDIO_ADDR_MASK                         0x00ff0000
#define BCHP_USB1_CTRL_MDIO_MDIO_ADDR_SHIFT                        16
#define BCHP_USB1_CTRL_MDIO_MDIO_ADDR_DEFAULT                      0x00000000

/* USB1_CTRL :: MDIO :: MDIO_DATA [15:00] */
#define BCHP_USB1_CTRL_MDIO_MDIO_DATA_MASK                         0x0000ffff
#define BCHP_USB1_CTRL_MDIO_MDIO_DATA_SHIFT                        0
#define BCHP_USB1_CTRL_MDIO_MDIO_DATA_DEFAULT                      0x00000000

/***************************************************************************
 *MDIO2 - MDIO Interface Read Register
 ***************************************************************************/
/* USB1_CTRL :: MDIO2 :: SYNOPSIS_CORE_ID [31:16] */
#define BCHP_USB1_CTRL_MDIO2_SYNOPSIS_CORE_ID_MASK                 0xffff0000
#define BCHP_USB1_CTRL_MDIO2_SYNOPSIS_CORE_ID_SHIFT                16
#define BCHP_USB1_CTRL_MDIO2_SYNOPSIS_CORE_ID_DEFAULT              0x0000270a

/* USB1_CTRL :: MDIO2 :: MDIO_RD_DATA [15:00] */
#define BCHP_USB1_CTRL_MDIO2_MDIO_RD_DATA_MASK                     0x0000ffff
#define BCHP_USB1_CTRL_MDIO2_MDIO_RD_DATA_SHIFT                    0
#define BCHP_USB1_CTRL_MDIO2_MDIO_RD_DATA_DEFAULT                  0x00000000

/***************************************************************************
 *TEST_PORT_CTL - Test Port Control Register
 ***************************************************************************/
/* USB1_CTRL :: TEST_PORT_CTL :: TP_EN [31:31] */
#define BCHP_USB1_CTRL_TEST_PORT_CTL_TP_EN_MASK                    0x80000000
#define BCHP_USB1_CTRL_TEST_PORT_CTL_TP_EN_SHIFT                   31
#define BCHP_USB1_CTRL_TEST_PORT_CTL_TP_EN_DEFAULT                 0x00000000

/* USB1_CTRL :: TEST_PORT_CTL :: TPCTL_SPARE [30:27] */
#define BCHP_USB1_CTRL_TEST_PORT_CTL_TPCTL_SPARE_MASK              0x78000000
#define BCHP_USB1_CTRL_TEST_PORT_CTL_TPCTL_SPARE_SHIFT             27
#define BCHP_USB1_CTRL_TEST_PORT_CTL_TPCTL_SPARE_DEFAULT           0x00000000

/* USB1_CTRL :: TEST_PORT_CTL :: scb1_wr_data_sel [26:26] */
#define BCHP_USB1_CTRL_TEST_PORT_CTL_scb1_wr_data_sel_MASK         0x04000000
#define BCHP_USB1_CTRL_TEST_PORT_CTL_scb1_wr_data_sel_SHIFT        26
#define BCHP_USB1_CTRL_TEST_PORT_CTL_scb1_wr_data_sel_DEFAULT      0x00000000

/* USB1_CTRL :: TEST_PORT_CTL :: scb0_wr_data_sel [25:25] */
#define BCHP_USB1_CTRL_TEST_PORT_CTL_scb0_wr_data_sel_MASK         0x02000000
#define BCHP_USB1_CTRL_TEST_PORT_CTL_scb0_wr_data_sel_SHIFT        25
#define BCHP_USB1_CTRL_TEST_PORT_CTL_scb0_wr_data_sel_DEFAULT      0x00000000

/* USB1_CTRL :: TEST_PORT_CTL :: pwrflt1_oe [24:24] */
#define BCHP_USB1_CTRL_TEST_PORT_CTL_pwrflt1_oe_MASK               0x01000000
#define BCHP_USB1_CTRL_TEST_PORT_CTL_pwrflt1_oe_SHIFT              24
#define BCHP_USB1_CTRL_TEST_PORT_CTL_pwrflt1_oe_DEFAULT            0x00000000

/* USB1_CTRL :: TEST_PORT_CTL :: pwrflt2_oe [23:23] */
#define BCHP_USB1_CTRL_TEST_PORT_CTL_pwrflt2_oe_MASK               0x00800000
#define BCHP_USB1_CTRL_TEST_PORT_CTL_pwrflt2_oe_SHIFT              23
#define BCHP_USB1_CTRL_TEST_PORT_CTL_pwrflt2_oe_DEFAULT            0x00000000

/* USB1_CTRL :: TEST_PORT_CTL :: pwron1_tstsel [22:22] */
#define BCHP_USB1_CTRL_TEST_PORT_CTL_pwron1_tstsel_MASK            0x00400000
#define BCHP_USB1_CTRL_TEST_PORT_CTL_pwron1_tstsel_SHIFT           22
#define BCHP_USB1_CTRL_TEST_PORT_CTL_pwron1_tstsel_DEFAULT         0x00000000

/* USB1_CTRL :: TEST_PORT_CTL :: pwron2_tstsel [21:21] */
#define BCHP_USB1_CTRL_TEST_PORT_CTL_pwron2_tstsel_MASK            0x00200000
#define BCHP_USB1_CTRL_TEST_PORT_CTL_pwron2_tstsel_SHIFT           21
#define BCHP_USB1_CTRL_TEST_PORT_CTL_pwron2_tstsel_DEFAULT         0x00000000

/* USB1_CTRL :: TEST_PORT_CTL :: test_clksel [20:19] */
#define BCHP_USB1_CTRL_TEST_PORT_CTL_test_clksel_MASK              0x00180000
#define BCHP_USB1_CTRL_TEST_PORT_CTL_test_clksel_SHIFT             19
#define BCHP_USB1_CTRL_TEST_PORT_CTL_test_clksel_DEFAULT           0x00000000

/* USB1_CTRL :: TEST_PORT_CTL :: pwrflt_tstsel [18:16] */
#define BCHP_USB1_CTRL_TEST_PORT_CTL_pwrflt_tstsel_MASK            0x00070000
#define BCHP_USB1_CTRL_TEST_PORT_CTL_pwrflt_tstsel_SHIFT           16
#define BCHP_USB1_CTRL_TEST_PORT_CTL_pwrflt_tstsel_DEFAULT         0x00000000

/* USB1_CTRL :: TEST_PORT_CTL :: UTMI_TEST_SEL [15:08] */
#define BCHP_USB1_CTRL_TEST_PORT_CTL_UTMI_TEST_SEL_MASK            0x0000ff00
#define BCHP_USB1_CTRL_TEST_PORT_CTL_UTMI_TEST_SEL_SHIFT           8
#define BCHP_USB1_CTRL_TEST_PORT_CTL_UTMI_TEST_SEL_DEFAULT         0x00000000

/* USB1_CTRL :: TEST_PORT_CTL :: TPOUT_SEL [07:00] */
#define BCHP_USB1_CTRL_TEST_PORT_CTL_TPOUT_SEL_MASK                0x000000ff
#define BCHP_USB1_CTRL_TEST_PORT_CTL_TPOUT_SEL_SHIFT               0
#define BCHP_USB1_CTRL_TEST_PORT_CTL_TPOUT_SEL_DEFAULT             0x00000000

/***************************************************************************
 *USB_SIMCTL - Simulation Register
 ***************************************************************************/
/* USB1_CTRL :: USB_SIMCTL :: sim_mode_en [31:31] */
#define BCHP_USB1_CTRL_USB_SIMCTL_sim_mode_en_MASK                 0x80000000
#define BCHP_USB1_CTRL_USB_SIMCTL_sim_mode_en_SHIFT                31
#define BCHP_USB1_CTRL_USB_SIMCTL_sim_mode_en_DEFAULT              0x00000000

/* USB1_CTRL :: USB_SIMCTL :: scale_down_en [30:30] */
#define BCHP_USB1_CTRL_USB_SIMCTL_scale_down_en_MASK               0x40000000
#define BCHP_USB1_CTRL_USB_SIMCTL_scale_down_en_SHIFT              30
#define BCHP_USB1_CTRL_USB_SIMCTL_scale_down_en_DEFAULT            0x00000000

/* USB1_CTRL :: USB_SIMCTL :: otg_scale_down_en [29:28] */
#define BCHP_USB1_CTRL_USB_SIMCTL_otg_scale_down_en_MASK           0x30000000
#define BCHP_USB1_CTRL_USB_SIMCTL_otg_scale_down_en_SHIFT          28
#define BCHP_USB1_CTRL_USB_SIMCTL_otg_scale_down_en_DEFAULT        0x00000000

/* USB1_CTRL :: USB_SIMCTL :: intr_test [27:27] */
#define BCHP_USB1_CTRL_USB_SIMCTL_intr_test_MASK                   0x08000000
#define BCHP_USB1_CTRL_USB_SIMCTL_intr_test_SHIFT                  27
#define BCHP_USB1_CTRL_USB_SIMCTL_intr_test_DEFAULT                0x00000000

/* USB1_CTRL :: USB_SIMCTL :: AUTOPPD_ON_OVERCUR_EN [26:26] */
#define BCHP_USB1_CTRL_USB_SIMCTL_AUTOPPD_ON_OVERCUR_EN_MASK       0x04000000
#define BCHP_USB1_CTRL_USB_SIMCTL_AUTOPPD_ON_OVERCUR_EN_SHIFT      26
#define BCHP_USB1_CTRL_USB_SIMCTL_AUTOPPD_ON_OVERCUR_EN_DEFAULT    0x00000000

/* USB1_CTRL :: USB_SIMCTL :: SIMCTL_SPARE [25:04] */
#define BCHP_USB1_CTRL_USB_SIMCTL_SIMCTL_SPARE_MASK                0x03fffff0
#define BCHP_USB1_CTRL_USB_SIMCTL_SIMCTL_SPARE_SHIFT               4
#define BCHP_USB1_CTRL_USB_SIMCTL_SIMCTL_SPARE_DEFAULT             0x00000000

/* USB1_CTRL :: USB_SIMCTL :: wkonlan_en [03:00] */
#define BCHP_USB1_CTRL_USB_SIMCTL_wkonlan_en_MASK                  0x0000000f
#define BCHP_USB1_CTRL_USB_SIMCTL_wkonlan_en_SHIFT                 0
#define BCHP_USB1_CTRL_USB_SIMCTL_wkonlan_en_DEFAULT               0x00000000

/***************************************************************************
 *USB_TESTCTL - Throutput Test Control
 ***************************************************************************/
/* USB1_CTRL :: USB_TESTCTL :: TESTCTL_SPARE2 [31:23] */
#define BCHP_USB1_CTRL_USB_TESTCTL_TESTCTL_SPARE2_MASK             0xff800000
#define BCHP_USB1_CTRL_USB_TESTCTL_TESTCTL_SPARE2_SHIFT            23
#define BCHP_USB1_CTRL_USB_TESTCTL_TESTCTL_SPARE2_DEFAULT          0x00000000

/* USB1_CTRL :: USB_TESTCTL :: CTRLLER_SEL [22:21] */
#define BCHP_USB1_CTRL_USB_TESTCTL_CTRLLER_SEL_MASK                0x00600000
#define BCHP_USB1_CTRL_USB_TESTCTL_CTRLLER_SEL_SHIFT               21
#define BCHP_USB1_CTRL_USB_TESTCTL_CTRLLER_SEL_DEFAULT             0x00000000

/* USB1_CTRL :: USB_TESTCTL :: DCNT_EN [20:20] */
#define BCHP_USB1_CTRL_USB_TESTCTL_DCNT_EN_MASK                    0x00100000
#define BCHP_USB1_CTRL_USB_TESTCTL_DCNT_EN_SHIFT                   20
#define BCHP_USB1_CTRL_USB_TESTCTL_DCNT_EN_DEFAULT                 0x00000000

/* USB1_CTRL :: USB_TESTCTL :: SPEED_SEL [19:19] */
#define BCHP_USB1_CTRL_USB_TESTCTL_SPEED_SEL_MASK                  0x00080000
#define BCHP_USB1_CTRL_USB_TESTCTL_SPEED_SEL_SHIFT                 19
#define BCHP_USB1_CTRL_USB_TESTCTL_SPEED_SEL_DEFAULT               0x00000000

/* USB1_CTRL :: USB_TESTCTL :: DCNT_SEL [18:16] */
#define BCHP_USB1_CTRL_USB_TESTCTL_DCNT_SEL_MASK                   0x00070000
#define BCHP_USB1_CTRL_USB_TESTCTL_DCNT_SEL_SHIFT                  16
#define BCHP_USB1_CTRL_USB_TESTCTL_DCNT_SEL_DEFAULT                0x00000000

/* USB1_CTRL :: USB_TESTCTL :: TESTCTL_SPARE1 [15:10] */
#define BCHP_USB1_CTRL_USB_TESTCTL_TESTCTL_SPARE1_MASK             0x0000fc00
#define BCHP_USB1_CTRL_USB_TESTCTL_TESTCTL_SPARE1_SHIFT            10
#define BCHP_USB1_CTRL_USB_TESTCTL_TESTCTL_SPARE1_DEFAULT          0x00000000

/* USB1_CTRL :: USB_TESTCTL :: MSEC_PRESCALER [09:00] */
#define BCHP_USB1_CTRL_USB_TESTCTL_MSEC_PRESCALER_MASK             0x000003ff
#define BCHP_USB1_CTRL_USB_TESTCTL_MSEC_PRESCALER_SHIFT            0
#define BCHP_USB1_CTRL_USB_TESTCTL_MSEC_PRESCALER_DEFAULT          0x00000000

/***************************************************************************
 *USB_TESTMON - Throughput Test Monitor
 ***************************************************************************/
/* USB1_CTRL :: USB_TESTMON :: TESTMON_STAT [31:00] */
#define BCHP_USB1_CTRL_USB_TESTMON_TESTMON_STAT_MASK               0xffffffff
#define BCHP_USB1_CTRL_USB_TESTMON_TESTMON_STAT_SHIFT              0

/***************************************************************************
 *UTMI_CTL_1 - UTMI Control Register
 ***************************************************************************/
/* USB1_CTRL :: UTMI_CTL_1 :: USB11_TX_OEB_P1 [31:31] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_USB11_TX_OEB_P1_MASK             0x80000000
#define BCHP_USB1_CTRL_UTMI_CTL_1_USB11_TX_OEB_P1_SHIFT            31
#define BCHP_USB1_CTRL_UTMI_CTL_1_USB11_TX_OEB_P1_DEFAULT          0x00000000

/* USB1_CTRL :: UTMI_CTL_1 :: SYNC_DET_LENG_P1 [30:28] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_SYNC_DET_LENG_P1_MASK            0x70000000
#define BCHP_USB1_CTRL_UTMI_CTL_1_SYNC_DET_LENG_P1_SHIFT           28
#define BCHP_USB1_CTRL_UTMI_CTL_1_SYNC_DET_LENG_P1_DEFAULT         0x00000000

/* USB1_CTRL :: UTMI_CTL_1 :: DFE_LPBACK_P1 [27:27] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_DFE_LPBACK_P1_MASK               0x08000000
#define BCHP_USB1_CTRL_UTMI_CTL_1_DFE_LPBACK_P1_SHIFT              27
#define BCHP_USB1_CTRL_UTMI_CTL_1_DFE_LPBACK_P1_DEFAULT            0x00000000

/* USB1_CTRL :: UTMI_CTL_1 :: UTMICTL1_SPARE3 [26:25] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_UTMICTL1_SPARE3_MASK             0x06000000
#define BCHP_USB1_CTRL_UTMI_CTL_1_UTMICTL1_SPARE3_SHIFT            25
#define BCHP_USB1_CTRL_UTMI_CTL_1_UTMICTL1_SPARE3_DEFAULT          0x00000000

/* USB1_CTRL :: UTMI_CTL_1 :: DISCON_PHY_P1 [24:24] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_DISCON_PHY_P1_MASK               0x01000000
#define BCHP_USB1_CTRL_UTMI_CTL_1_DISCON_PHY_P1_SHIFT              24
#define BCHP_USB1_CTRL_UTMI_CTL_1_DISCON_PHY_P1_DEFAULT            0x00000000

/* USB1_CTRL :: UTMI_CTL_1 :: BC10_DM_PU_P1 [23:23] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DM_PU_P1_MASK               0x00800000
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DM_PU_P1_SHIFT              23
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DM_PU_P1_DEFAULT            0x00000000

/* USB1_CTRL :: UTMI_CTL_1 :: BC10_DP_PU_P1 [22:22] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DP_PU_P1_MASK               0x00400000
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DP_PU_P1_SHIFT              22
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DP_PU_P1_DEFAULT            0x00000000

/* USB1_CTRL :: UTMI_CTL_1 :: BC10_DM_PD_P1 [21:21] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DM_PD_P1_MASK               0x00200000
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DM_PD_P1_SHIFT              21
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DM_PD_P1_DEFAULT            0x00000000

/* USB1_CTRL :: UTMI_CTL_1 :: BC10_DP_PD_P1 [20:20] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DP_PD_P1_MASK               0x00100000
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DP_PD_P1_SHIFT              20
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DP_PD_P1_DEFAULT            0x00000000

/* USB1_CTRL :: UTMI_CTL_1 :: PHY_MODE_P1 [19:18] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_PHY_MODE_P1_MASK                 0x000c0000
#define BCHP_USB1_CTRL_UTMI_CTL_1_PHY_MODE_P1_SHIFT                18
#define BCHP_USB1_CTRL_UTMI_CTL_1_PHY_MODE_P1_DEFAULT              0x00000000

/* USB1_CTRL :: UTMI_CTL_1 :: UTMI_SOFT_RESETB_P1 [17:17] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_UTMI_SOFT_RESETB_P1_MASK         0x00020000
#define BCHP_USB1_CTRL_UTMI_CTL_1_UTMI_SOFT_RESETB_P1_SHIFT        17
#define BCHP_USB1_CTRL_UTMI_CTL_1_UTMI_SOFT_RESETB_P1_DEFAULT      0x00000001

/* USB1_CTRL :: UTMI_CTL_1 :: AFE_NON_DRIVING_P1 [16:16] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_AFE_NON_DRIVING_P1_MASK          0x00010000
#define BCHP_USB1_CTRL_UTMI_CTL_1_AFE_NON_DRIVING_P1_SHIFT         16
#define BCHP_USB1_CTRL_UTMI_CTL_1_AFE_NON_DRIVING_P1_DEFAULT       0x00000000

/* USB1_CTRL :: UTMI_CTL_1 :: USB11_TX_OEB [15:15] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_USB11_TX_OEB_MASK                0x00008000
#define BCHP_USB1_CTRL_UTMI_CTL_1_USB11_TX_OEB_SHIFT               15
#define BCHP_USB1_CTRL_UTMI_CTL_1_USB11_TX_OEB_DEFAULT             0x00000000

/* USB1_CTRL :: UTMI_CTL_1 :: SYNC_DET_LENG [14:12] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_SYNC_DET_LENG_MASK               0x00007000
#define BCHP_USB1_CTRL_UTMI_CTL_1_SYNC_DET_LENG_SHIFT              12
#define BCHP_USB1_CTRL_UTMI_CTL_1_SYNC_DET_LENG_DEFAULT            0x00000000

/* USB1_CTRL :: UTMI_CTL_1 :: DFE_LPBACK [11:11] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_DFE_LPBACK_MASK                  0x00000800
#define BCHP_USB1_CTRL_UTMI_CTL_1_DFE_LPBACK_SHIFT                 11
#define BCHP_USB1_CTRL_UTMI_CTL_1_DFE_LPBACK_DEFAULT               0x00000000

/* USB1_CTRL :: UTMI_CTL_1 :: UTMICTL1_SPARE1 [10:09] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_UTMICTL1_SPARE1_MASK             0x00000600
#define BCHP_USB1_CTRL_UTMI_CTL_1_UTMICTL1_SPARE1_SHIFT            9
#define BCHP_USB1_CTRL_UTMI_CTL_1_UTMICTL1_SPARE1_DEFAULT          0x00000000

/* USB1_CTRL :: UTMI_CTL_1 :: DISCON_PHY [08:08] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_DISCON_PHY_MASK                  0x00000100
#define BCHP_USB1_CTRL_UTMI_CTL_1_DISCON_PHY_SHIFT                 8
#define BCHP_USB1_CTRL_UTMI_CTL_1_DISCON_PHY_DEFAULT               0x00000000

/* USB1_CTRL :: UTMI_CTL_1 :: BC10_DM_PU [07:07] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DM_PU_MASK                  0x00000080
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DM_PU_SHIFT                 7
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DM_PU_DEFAULT               0x00000000

/* USB1_CTRL :: UTMI_CTL_1 :: BC10_DP_PU [06:06] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DP_PU_MASK                  0x00000040
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DP_PU_SHIFT                 6
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DP_PU_DEFAULT               0x00000000

/* USB1_CTRL :: UTMI_CTL_1 :: BC10_DM_PD [05:05] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DM_PD_MASK                  0x00000020
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DM_PD_SHIFT                 5
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DM_PD_DEFAULT               0x00000000

/* USB1_CTRL :: UTMI_CTL_1 :: BC10_DP_PD [04:04] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DP_PD_MASK                  0x00000010
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DP_PD_SHIFT                 4
#define BCHP_USB1_CTRL_UTMI_CTL_1_BC10_DP_PD_DEFAULT               0x00000000

/* USB1_CTRL :: UTMI_CTL_1 :: PHY_MODE [03:02] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_PHY_MODE_MASK                    0x0000000c
#define BCHP_USB1_CTRL_UTMI_CTL_1_PHY_MODE_SHIFT                   2
#define BCHP_USB1_CTRL_UTMI_CTL_1_PHY_MODE_DEFAULT                 0x00000000

/* USB1_CTRL :: UTMI_CTL_1 :: UTMI_SOFT_RESETB [01:01] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_UTMI_SOFT_RESETB_MASK            0x00000002
#define BCHP_USB1_CTRL_UTMI_CTL_1_UTMI_SOFT_RESETB_SHIFT           1
#define BCHP_USB1_CTRL_UTMI_CTL_1_UTMI_SOFT_RESETB_DEFAULT         0x00000001

/* USB1_CTRL :: UTMI_CTL_1 :: AFE_NON_DRIVING [00:00] */
#define BCHP_USB1_CTRL_UTMI_CTL_1_AFE_NON_DRIVING_MASK             0x00000001
#define BCHP_USB1_CTRL_UTMI_CTL_1_AFE_NON_DRIVING_SHIFT            0
#define BCHP_USB1_CTRL_UTMI_CTL_1_AFE_NON_DRIVING_DEFAULT          0x00000000

/***************************************************************************
 *UTMI_CTL_2 - UTMI Control 2 Register
 ***************************************************************************/
/* USB1_CTRL :: UTMI_CTL_2 :: UTMICTL2_SPARE [31:00] */
#define BCHP_USB1_CTRL_UTMI_CTL_2_UTMICTL2_SPARE_MASK              0xffffffff
#define BCHP_USB1_CTRL_UTMI_CTL_2_UTMICTL2_SPARE_SHIFT             0
#define BCHP_USB1_CTRL_UTMI_CTL_2_UTMICTL2_SPARE_DEFAULT           0x00000000

/***************************************************************************
 *SPARE1 - Spare1 Register for future use
 ***************************************************************************/
/* USB1_CTRL :: SPARE1 :: SPARE1_BITS [31:00] */
#define BCHP_USB1_CTRL_SPARE1_SPARE1_BITS_MASK                     0xffffffff
#define BCHP_USB1_CTRL_SPARE1_SPARE1_BITS_SHIFT                    0
#define BCHP_USB1_CTRL_SPARE1_SPARE1_BITS_DEFAULT                  0x00000000

/***************************************************************************
 *SPARE2 - Spare2 Register for future use
 ***************************************************************************/
/* USB1_CTRL :: SPARE2 :: SPARE2_BITS [31:00] */
#define BCHP_USB1_CTRL_SPARE2_SPARE2_BITS_MASK                     0xffffffff
#define BCHP_USB1_CTRL_SPARE2_SPARE2_BITS_SHIFT                    0
#define BCHP_USB1_CTRL_SPARE2_SPARE2_BITS_DEFAULT                  0x00000000

#endif /* #ifndef BCHP_USB1_CTRL_H__ */

/* End of File */
