/***************************************************************************
 *     Copyright (c) 1999-2011, Broadcom Corporation
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
 * Date:           Generated on         Tue Dec  6 18:45:43 2011
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
 * $brcm_Log: /magnum/basemodules/chp/7435/rdb/a0/bchp_pcie_misc_perst.h $
 * 
 * Hydra_Software_Devel/2   12/7/11 3:33p mward
 * SW7435-3: Synced up with central rdb.
 *
 ***************************************************************************/

#ifndef BCHP_PCIE_MISC_PERST_H__
#define BCHP_PCIE_MISC_PERST_H__

/***************************************************************************
 *PCIE_MISC_PERST - PCI-E Miscellaneous Registers (Fundamental reset)
 ***************************************************************************/
#define BCHP_PCIE_MISC_PERST_ECO_CTRL_PERST      0x00414100 /* ECO PCIE Reset Control Register */
#define BCHP_PCIE_MISC_PERST_CCE_STATUS          0x00414104 /* Config Copy Engine Status */

/***************************************************************************
 *ECO_CTRL_PERST - ECO PCIE Reset Control Register
 ***************************************************************************/
/* PCIE_MISC_PERST :: ECO_CTRL_PERST :: reserved0 [31:16] */
#define BCHP_PCIE_MISC_PERST_ECO_CTRL_PERST_reserved0_MASK         0xffff0000
#define BCHP_PCIE_MISC_PERST_ECO_CTRL_PERST_reserved0_SHIFT        16

/* PCIE_MISC_PERST :: ECO_CTRL_PERST :: ECO_PERST_N [15:00] */
#define BCHP_PCIE_MISC_PERST_ECO_CTRL_PERST_ECO_PERST_N_MASK       0x0000ffff
#define BCHP_PCIE_MISC_PERST_ECO_CTRL_PERST_ECO_PERST_N_SHIFT      0
#define BCHP_PCIE_MISC_PERST_ECO_CTRL_PERST_ECO_PERST_N_DEFAULT    0x00000000

/***************************************************************************
 *CCE_STATUS - Config Copy Engine Status
 ***************************************************************************/
/* PCIE_MISC_PERST :: CCE_STATUS :: CCE_DONE [31:31] */
#define BCHP_PCIE_MISC_PERST_CCE_STATUS_CCE_DONE_MASK              0x80000000
#define BCHP_PCIE_MISC_PERST_CCE_STATUS_CCE_DONE_SHIFT             31

/* PCIE_MISC_PERST :: CCE_STATUS :: reserved0 [30:03] */
#define BCHP_PCIE_MISC_PERST_CCE_STATUS_reserved0_MASK             0x7ffffff8
#define BCHP_PCIE_MISC_PERST_CCE_STATUS_reserved0_SHIFT            3

/* PCIE_MISC_PERST :: CCE_STATUS :: CCE_BAD_GISB_ACCESS [02:02] */
#define BCHP_PCIE_MISC_PERST_CCE_STATUS_CCE_BAD_GISB_ACCESS_MASK   0x00000004
#define BCHP_PCIE_MISC_PERST_CCE_STATUS_CCE_BAD_GISB_ACCESS_SHIFT  2

/* PCIE_MISC_PERST :: CCE_STATUS :: CCE_BAD_I2C_ACCESS [01:01] */
#define BCHP_PCIE_MISC_PERST_CCE_STATUS_CCE_BAD_I2C_ACCESS_MASK    0x00000002
#define BCHP_PCIE_MISC_PERST_CCE_STATUS_CCE_BAD_I2C_ACCESS_SHIFT   1

/* PCIE_MISC_PERST :: CCE_STATUS :: CCE_BAD_SECTION_ID [00:00] */
#define BCHP_PCIE_MISC_PERST_CCE_STATUS_CCE_BAD_SECTION_ID_MASK    0x00000001
#define BCHP_PCIE_MISC_PERST_CCE_STATUS_CCE_BAD_SECTION_ID_SHIFT   0

#endif /* #ifndef BCHP_PCIE_MISC_PERST_H__ */

/* End of File */
