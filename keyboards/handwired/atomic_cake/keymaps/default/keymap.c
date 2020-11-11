#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP( // Layer 0 : Alphas, mods and ansi symbols
		KC_Q,		KC_D,	KC_R,	KC_W,	KC_B,	KC_J,	KC_F,	KC_U,	KC_O,	KC_P, 	
		KC_A,		KC_S,	KC_H,	KC_T,	KC_G,	KC_Y,	KC_N,	KC_E,	KC_I,	KC_SFTENT,	
		LSFT_T(KC_Z),KC_X,	KC_M,	KC_C,	KC_V,	KC_K,	KC_L,	KC_MINS,KC_EQL,	KC_GESC,	
		KC_LCTL,	KC_LALT,KC_QUOT,KC_SPC,	MO(3),	KC_LGUI,MO(2),	KC_SLSH,KC_BSLS,KC_TAB),

	KEYMAP( // Layer 1 : Gaming layer
		KC_ESC,		KC_Q,	KC_W,	KC_E,	KC_R,	KC_T,	KC_TRNS,KC_UP,	KC_P8,	KC_P9, 	
		KC_TAB,		KC_A,	KC_S,	KC_D,	KC_F,	KC_G,	KC_LEFT,KC_DOWN,KC_RGHT,KC_ENT,	
		KC_LSFT,	KC_Z,	KC_X,	KC_C,	KC_V,	KC_B,	KC_TRNS,KC_P1,	KC_P2,	KC_P3,	
		KC_LCTL,	KC_LALT,KC_ENT,	KC_SPC,	MO(2),	KC_LGUI,MO(3),	KC_P0,	KC_TRNS,DF(0)),

	KEYMAP( // Layer 2 : Numbers, symbols and numpad 
		KC_TRNS,	KC_6,	KC_5,	KC_4,	KC_PGUP,KC_P7,	KC_P8,	KC_P9,	KC_LPRN,KC_LBRC,
		KC_SCLN,	KC_3,	KC_2,	KC_1,	KC_PGDN,KC_P4,	KC_P5,	KC_P6,	KC_RPRN,KC_RBRC,
		KC_LSFT,	KC_9,	KC_8,	KC_7,	KC_BSPC,KC_P1,	KC_P2,	KC_P3,	KC_P0,	KC_RSFT,
		KC_LCTL,	KC_DEL,	KC_DOT,	KC_0,	KC_COMM,KC_LGUI,KC_TRNS,KC_TRNS,DF(1),	RESET),

	KEYMAP( // Layer 3 : Everything else
		KC_TRNS,	KC_F1,	KC_F2,	KC_F3,	KC_VOLD,KC_VOLU,KC_MS_L,KC_MS_D,KC_MS_U,KC_MS_R,
		KC_LALT,	KC_F4,	KC_F5,	KC_F6,	KC_MUTE,KC_MPLY,KC_LEFT,KC_DOWN,KC_UP,	KC_RGHT, 
		KC_LSFT,	KC_F7,	KC_F8,	KC_F9,	KC_MPRV,KC_MNXT,KC_BTN1,KC_BTN2,KC_BTN3,KC_BTN4, 
		KC_TRNS,	KC_F10,	KC_F11,	KC_F12,	KC_TRNS,KC_TRNS,KC_WH_L,KC_WH_D,KC_WH_U,KC_WH_R),

	KEYMAP( // Copy Layer
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
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
