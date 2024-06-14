// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     
    [0] = LAYOUT_split_3x5_3(
        KC_Q, KC_W, KC_E, KC_R, KC_T,                     KC_Y, KC_U, KC_I, KC_O, KC_P,
        KC_A, KC_S, LALT_T(KC_D), LCTL_T(KC_F), KC_G,     KC_H, LCTL_T(KC_J), LALT_T(KC_K), KC_L, KC_SCLN,
        KC_Z, KC_X, KC_C, KC_V, KC_B,                     KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
        LSFT_T(KC_DEL), KC_SPC, LT(1, KC_TAB),            LT(0, KC_ESC), LSFT_T(KC_ENT), KC_BSPC
    ),
    [1] = LAYOUT_split_3x5_3( 
        KC_1, KC_2, KC_3, KC_4, KC_5,                     KC_6, KC_7, KC_8, KC_9, KC_0,
        KC_A, KC_DASH, LALT_T(KC_D), LCTL_T(KC_F), KC_LGUI,     KC_LEFT, KC_UP, KC_LEFT, KC_RGHT, KC_NO,
        KC_Z, KC_BSLS, KC_LBRC, KC_RBRC, KC_QUOT,            KC_HOME, KC_END, KC_COMM, KC_DOT, KC_SLSH,
        LSFT_T(KC_DEL), KC_SPC, LT(1, KC_TAB),            LT(0, KC_ESC), LSFT_T(KC_ENT), KC_BSPC
    ),
};
