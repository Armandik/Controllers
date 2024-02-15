#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_1, KC_2, KC_3, KC_Q, KC_W, KC_E, KC_R, KC_T,
	KC_4, KC_5, KC_6, KC_Y, KC_U, KC_I, KC_O, KC_P,
	KC_7, KC_8, KC_9, KC_0, KC_A, KC_S, KC_D, KC_F
  )
};
