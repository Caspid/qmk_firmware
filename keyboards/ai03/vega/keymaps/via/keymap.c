/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

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
#include QMK_KEYBOARD_H



// Send delete when pressing shift + backspace
// const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

// L+R shift = CapsLock
// const key_override_t shifts_capslock = ko_make_basic(KC_LSHIFT, KC_RSHIFT, KC_CAPSLOCK);

// Shift + bracket still produces bracket 
// const key_override_t L_bracket_override = ko_make_basic(MOD_MASK_SHIFT, KC_LBRACKET, LSFT(KC_LBRACKET));
// const key_override_t R_bracket_override = ko_make_basic(MOD_MASK_SHIFT, KC_RBRACKET, LSFT(KC_RBRACKET));

// Alt+ number functions as Win+number 
// const key_override_t alt_key_override1 = ko_make_basic(MOD_MASK_ALT, KC_1, LGUI(KC_1));
// const key_override_t alt_key_override2 = ko_make_basic(MOD_MASK_ALT, KC_2, LGUI(KC_2));
// const key_override_t alt_key_override3 = ko_make_basic(MOD_MASK_ALT, KC_3, LGUI(KC_3));
// const key_override_t alt_key_override4 = ko_make_basic(MOD_MASK_ALT, KC_4, LGUI(KC_4));
// const key_override_t alt_key_override5 = ko_make_basic(MOD_MASK_ALT, KC_5, LGUI(KC_5));
// const key_override_t alt_key_override6 = ko_make_basic(MOD_MASK_ALT, KC_6, LGUI(KC_6));
// const key_override_t alt_key_override7 = ko_make_basic(MOD_MASK_ALT, KC_7, LGUI(KC_7));
// const key_override_t alt_key_override8 = ko_make_basic(MOD_MASK_ALT, KC_8, LGUI(KC_8));
// const key_override_t alt_key_override9 = ko_make_basic(MOD_MASK_ALT, KC_9, LGUI(KC_9));

// Unicode keys
// ≤ 
// U+2264





// Colemak test
//
//		// Define a type for as many tap dance states as you need
//		typedef enum {
//		    TD_NONE,
//		    TD_UNKNOWN,
//		    TD_SINGLE_TAP,
//		    TD_SINGLE_HOLD,
//		    TD_DOUBLE_TAP,
//		    TD_TRIPLE_TAP,
//		} td_state_t;
//
//		typedef struct {
//		    bool is_press_action;
//		    td_state_t state;
//		} td_tap_t;
//
//		enum {
//		    COLEMAK_LAYR, // Our custom tap dance key; add any other tap dance keys to this enum 
//		};
//
//		// Declare the functions to be used with your tap dance key(s)
//
//		// Function associated with all tap dances
//		td_state_t cur_dance(qk_tap_dance_state_t *state);
//
//		// Functions associated with individual tap dances
//		void ql_finished(qk_tap_dance_state_t *state, void *user_data);
//		void ql_reset(qk_tap_dance_state_t *state, void *user_data);
//
//
//
//
//		// Determine the current tap dance state
//		td_state_t cur_dance(qk_tap_dance_state_t *state) {
//		    if (state->count == 1) {
//			   if (!state->pressed) return TD_SINGLE_TAP;
//			   else return TD_SINGLE_HOLD;
//		    } else if (state->count == 3) return TD_TRIPLE_TAP;
//		    else return TD_UNKNOWN;
//		}
//
//		// Initialize tap structure associated with example tap dance key
//		static td_tap_t ql_tap_state = {
//		    .is_press_action = true,
//		    .state = TD_NONE
//		};
//
//		// Functions that control what our tap dance key does
//		void ql_finished(qk_tap_dance_state_t *state, void *user_data) {
//		    ql_tap_state.state = cur_dance(state);
//		    switch (ql_tap_state.state) {
//			   case TD_SINGLE_TAP:
//				  tap_code(KC_LALT);
//				  break;
////			   case TD_SINGLE_HOLD:
////				  layer_on(_MY_LAYER);
////				  break;
//			   case TD_TRIPLE_TAP:
//				  // Check to see if the layer is already set
//				  if (layer_state_is(_COLEMAK)) {
//					 // If already set, then switch it off
//					 layer_off(_COLEMAK);
//				  } else {
//					 // If not already set, then switch the layer on
//					 layer_on(_COLEMAK);
//				  }
//				  break;
//			   default:
//				  break;
//		    }
//		}
//
////		void ql_reset(qk_tap_dance_state_t *state, void *user_data) {
////		    // If the key was held down and now is released then switch off the layer
////		    if (ql_tap_state.state == TD_SINGLE_HOLD) {
////			   layer_off(_COLEMAK);
////		    }
////		    ql_tap_state.state = TD_NONE;
////		}
//
//		// Associate our tap dance key with its functionality
//		qk_tap_dance_action_t tap_dance_actions[] = {
//		    [COLEMAK_LAYR] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, ql_finished, ql_reset, 275)
//		};
//
//
//
//
//
//
//
//
//
//
//
//
//
//


// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
//     &delete_key_override,

//		&shifts_capslock,
    
//     &L_bracket_override,
//     &R_bracket_override,
    
//     &alt_key_override1,
//     &alt_key_override2,
//     &alt_key_override3,
//     &alt_key_override4,
//     &alt_key_override5,
//     &alt_key_override6,
//     &alt_key_override7,
//     &alt_key_override8,
//     &alt_key_override9,
 
    
    NULL // Null terminate the array of overrides!
};



// Tap Dance declarations
// enum {
//     TD_COLEMAK,
// };

// Tap Dance definitions
// qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Rctrl, twice for Colemak
//     [TD_COLEMAK] = ACTION_TAP_DANCE_DOUBLE(KC_RCTRL, *** GO TO LAYER),
// };

// Add tap dance item to your keymap in place of a keycode
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // ...
//     TD(TD_COLEMAK)
    // ...
// };





	






// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_names {
    _BASE,
    _FN1,
    _FN2,
    _FN3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BASE] = LAYOUT_all(
		KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,  KC_HOME, 
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSLS, KC_END,  
		MO(1),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_PGUP, 
		KC_LSFT, KC_BSLS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_PGDN, 
		KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC,           KC_SPC,           KC_SPC,           KC_RALT, KC_RCTL,          KC_LEFT, KC_DOWN, KC_RGHT 
	),

	[_FN1] = LAYOUT_all(
		QK_BOOT,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, _______, 
		_______, _______, _______, KC_PGUP, _______, _______, _______, _______, KC_UP,   _______, _______, _______, _______,          _______, _______, 
		_______, _______, KC_HOME, KC_PGDN, KC_END,  _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,          _______,          _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, KC_PGUP, _______, 
		_______, _______, _______,          _______,          _______,          _______,          _______, _______,          KC_HOME, KC_PGDN, KC_END 
	),

	[_FN2] = LAYOUT_all(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, 
		_______, _______, _______,          _______,          _______,          _______,          _______, _______,          _______, _______, _______  
	),

	[_FN3] = LAYOUT_all(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, 
		_______, _______, _______,          _______,          _______,          _______,          _______, _______,          _______, _______, _______  
	),

};
