/*
 *  Copyright Altera Corporation (C) 2013. All rights reserved
 *
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms and conditions of the GNU General Public License,
 *  version 2, as published by the Free Software Foundation.
 *
 *  This program is distributed in the hope it will be useful, but WITHOUT
 *  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 *  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 *  more details.
 *
 *  You should have received a copy of the GNU General Public License along with
 *  this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <common.h>
#include <asm/arch/reset_manager.h>
#include <asm/arch/system_manager.h>
#include <asm/io.h>

#include <netdev.h>
#include <mmc.h>
#include <dwmmc.h>
#include <asm/arch/interrupts.h>
#include <asm/arch/sdram.h>
#include <asm/arch/dwmmc.h>
#include <dwmmc.h>
#include <phy.h>
#include <micrel.h>
#include <../drivers/net/designware.h>

#include <altera.h>
#include <fpga.h>


DECLARE_GLOBAL_DATA_PTR;

/*
 * Print Board information
 */
int checkboard(void)
{
#ifdef CONFIG_SOCFPGA_VIRTUAL_TARGET
	puts("BOARD : Altera VTDEV5XS1 Virtual Board\n");
#else
	puts("BOARD : Altera SOCFPGA Arria V Board\n");
#endif
	return 0;
}
