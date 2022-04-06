/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xA103
#define PRODUCT_ID      0x0015
#define DEVICE_VER      0x0001
#define MANUFACTURER    ai03 Design Studio
#define PRODUCT         Vega

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

#define MATRIX_COL_PINS { B5, A3, A9, A8, B15, B14, B13, B12, B11, B10, B2, B1, B0, A7, A6 }
#define MATRIX_ROW_PINS { A1, A2, B3, A15, A10 }
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    3

/* New additions */
#define USB_POLLING_INTERVAL_MS 1 /* 1000 Hz polling rate */
#define QMK_KEYS_PER_SCAN 12
#undef LOCKING_SUPPORT_ENABLE /* disables lock key functionality */
#undef LOCKING_RESYNC_ENABLE
#define NO_MUSIC_MODE /* disables sound output to a speaker */
#define LAYER_STATE_8BIT /* limits to 8 layers */
#define TAPPING_TERM 120 /* default 200 wasn't allowing for quick copy paste */

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
/* #define LOCKING_SUPPORT_ENABLE */
/* Locking resynchronize hack */
/* #define LOCKING_RESYNC_ENABLE  */


/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
