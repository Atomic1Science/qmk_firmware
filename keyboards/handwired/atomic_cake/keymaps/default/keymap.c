#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP( // Layer 0
		KC_LALT, 	KC_Q,	KC_W,	KC_E,	KC_R,	KC_T,	KC_Y,	KC_U,	KC_I,	KC_O,	KC_P,	KC_GRV, 
		KC_ESC,		KC_A,	KC_S,	KC_D,	KC_F,	KC_G,	KC_H,	KC_J,	KC_K,	KC_L,	KC_SCLN,KC_QUOT, 
		KC_LSFT,	KC_Z,	KC_X,	KC_C,	KC_V,	KC_B,	KC_N,	KC_M,	KC_BSPC,KC_DOT, KC_LBRC,KC_BSLS, 
		KC_LCTL,	KC_TAB,	MO(4), 	MO(3), 	MO(2),	KC_SPC,	KC_LGUI,MO(1),	KC_ENT, KC_COMM,KC_RBRC,KC_SLSH),

	KEYMAP( // Layer 1
		KC_TRNS,	KC_7,	KC_8,	KC_9,	KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_HOME,KC_UP,	KC_PGUP,KC_DEL, 
		KC_TRNS,	KC_4,	KC_5,	KC_6,	KC_DLR,	KC_PERC,KC_CIRC,KC_LBRC,KC_LEFT,KC_TRNS,KC_RGHT,KC_PSCR, // TODO check if the keycodes for numpad arrw keys are right
		KC_TRNS,	KC_1,	KC_2,	KC_3,	KC_EXLM,KC_AT,	KC_HASH,KC_RBRC,KC_END, KC_DOWN,KC_PGDN,KC_PAUS, 
		KC_TRNS,	KC_0,	KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_INS, KC_TRNS,KC_TRNS,KC_TRNS),

	KEYMAP( // Layer 2
		KC_TRNS,	KC_F1,	KC_F2,	KC_F3,	KC_TRNS,KC_VOLD,KC_VOLU,KC_TRNS,KC_P7,	KC_P8,	KC_P9,	KC_TRNS, 
		KC_TRNS,	KC_F4,	KC_F5,	KC_F6,	KC_TRNS,KC_MUTE,KC_MPLY,KC_TRNS,KC_P4,	KC_P5,	KC_P6,	KC_TRNS, 
		KC_TRNS,	KC_F7,	KC_F8,	KC_F9,	KC_TRNS,KC_MPRV,KC_MNXT,KC_TRNS,KC_P1,	KC_P2,	KC_P3,	KC_TRNS, 
		KC_TRNS,	KC_F10,	KC_F11,	KC_F12,	KC_TRNS,KC_TRNS,KC_TRNS,RESET,	KC_P0,	KC_TRNS,KC_TRNS,KC_TRNS),

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
