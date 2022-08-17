#ifndef _NANOPI_VICTRON_H
#define _NANOPI_VICTRON_H

#include "sun8i.h"
#include "sunxi_victron_common.h"

#define VICTRON_ID_EEPROM_BUS 0
#define VICTRON_ID_TABLE \
	"board_53454556=setenv fdtfile sun8i-h3-nanopi-easysolar.dtb\0" \
	"board_504d4556=setenv fdtfile sun8i-h3-nanopi-easysolar.dtb; setenv model MultiPlus-II\0" \
	"board_39534556=setenv fdtfile sun8i-h3-nanopi-easysolar-a9.dtb\0" \
	"board_39504d56=setenv fdtfile sun8i-h3-nanopi-easysolar-a9.dtb; setenv model MultiPlus-II\0" \
	"board_41534556=setenv fdtfile sun8i-h3-nanopi-easysolar-a10.dtb\0" \
	"board_41504d56=setenv fdtfile sun8i-h3-nanopi-easysolar-a10.dtb; setenv model MultiPlus-II\0" \
	"board_584d4556=setenv fdtfile sun8i-h3-nanopi-maxi-gx.dtb\0" \
	"board_39584d56=setenv fdtfile sun8i-h3-nanopi-maxi-gx-a9.dtb\0" \
	"board_41584d56=setenv fdtfile sun8i-h3-nanopi-maxi-gx-a10.dtb\0" \
	"board_47504556=setenv fdtfile sun8i-h3-nanopi-paygo.dtb\0" \
	"board_3456584d=setenv fdtfile sun8i-h3-nanopi-v4-smart-hub.dtb\0" \
	"board_524b4556=setenv fdtfile sun8i-h3-sinh3-ekrano.dtb\0"

#endif
