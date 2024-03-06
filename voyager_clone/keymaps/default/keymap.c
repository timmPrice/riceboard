// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_2(
        KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
        KC_A, LALT(KC_S), LCTL_T(KC_D), KC_F, KC_G, KC_H, LCTL_T(KC_J), LALT_T(KC_L), KC_L, KC_SCLA,
        KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KCSLSH,
        LSFT_T(KC_DEL), LT(1, KC_SPC), LT(2, KC_ENT), KC_BSPC
    ),
    [1] = LAYOUT_split_3x5_2(
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
        KC_TAB, KC_NO, KC_HOME, KC_END, KC_QUOTE, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_GRAVE,
        KC_NO, KC_NO, KC_PLUS, KC_MINUS, KC_NO, KC_BSLS, KC_NO, KC_NO, KC_NO, KC_NO,
        LSHFT(KC_DEL), LT(1, KC_SPC), LT(2, KC_ENT), KC_BSPC

    ),
    [2] = LAYOUT_split_3x5_2(
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
        KC_TAB, KC_NO, KC_NO, KC_LGUI, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_F11, KC_F12,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        LSHFT(KC_DEL), LT(1, KC_SPC), LT(2, KC_ENT), KC_BSPC

    ),
};
