#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP( // Layer 0 : Alphas, mods and ansi symbols
		KC_LALT, 	KC_Q,	KC_W,	KC_E,	KC_R,	KC_T,	KC_Y,	KC_U,	KC_I,	KC_O,	KC_P,	KC_BSPC, 
		KC_GESC,	KC_A,	KC_S,	KC_D,	KC_F,	KC_G,	KC_H,	KC_J,	KC_K,	KC_L,	KC_SCLN,KC_ENT,
		KC_LSPO,	KC_Z,	KC_X,	KC_C,	KC_V,	KC_B,	KC_N,	KC_M,	KC_MINS,KC_EQL, KC_SLSH,KC_RSPC, 
		LCTL_T(KC_COMM),KC_TRNS,KC_TRNS,KC_TAB,KC_SPC,MO(2),KC_LGUI,MO(1),	KC_QUOT,KC_DEL,	KC_BSLS,RCTL_T(KC_DOT)),

	KEYMAP( // Layer 1 : Numbers, symbols and numpad 
		KC_TRNS,	KC_7,	KC_8,	KC_9,	KC_AMPR,KC_ASTR,KC_LPRN,KC_LBRC,KC_P7,	KC_P8,	KC_P9,	KC_PSCR, 
		RESET,		KC_4,	KC_5,	KC_6,	KC_DLR,	KC_PERC,KC_CIRC,KC_RBRC,KC_P4,	KC_P5,	KC_P6,	KC_PAUS,
		KC_TRNS,	KC_1,	KC_2,	KC_3,	KC_EXLM,KC_AT,	KC_HASH,DF(0),	KC_P1,	KC_P2,	KC_P3,	KC_ENT, 
		KC_TRNS,	KC_0,	KC_TRNS,KC_DOT,	KC_RPRN,KC_NLCK,KC_TRNS,KC_TRNS,KC_P0,	KC_TRNS,KC_PDOT,KC_ENT),

	KEYMAP( // Layer 2 : Everything else
		KC_TRNS,	KC_F1,	KC_F2,	KC_F3,	KC_TRNS,KC_VOLD,KC_VOLU,KC_MS_L,KC_MS_D,KC_MS_U,KC_MS_R,DF(1),
		KC_TRNS,	KC_F4,	KC_F5,	KC_F6,	KC_TRNS,KC_MUTE,KC_MPLY,KC_LEFT,KC_DOWN,KC_UP,	KC_RGHT,KC_TRNS, 
		KC_TRNS,	KC_F7,	KC_F8,	KC_F9,	KC_TRNS,KC_MPRV,KC_MNXT,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, 
		KC_TRNS,	KC_F10,	KC_F11,	KC_F12,	KC_TRNS,KC_TRNS,KC_TRNS,KC_WH_L,KC_WH_D,KC_WH_U,KC_WH_R,KC_TRNS),

	KEYMAP( // Copy Layer
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}
