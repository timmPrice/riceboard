// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_split_3x5_3(
        KC_Q, KC_W, KC_E, KC_R, KC_T,     KC_Y, KC_U, KC_I, KC_O, KC_P,
        KC_A, KC_S, KC_D, KC_F, KC_G,     KC_H, KC_J, KC_K, KC_L, KC_ESC,
        KC_Z, KC_X, KC_C, KC_V, KC_B,     KC_N, KC_M, KC_LALT, KC_LCTL, KC_LSFT,
        LT(2, KC_NO), KC_BSPC, KC_DEL,    KC_ENT, KC_SPC, LT(1, KC_NO)
    ),
    [1] = LAYOUT_split_3x5_3(
        KC_1, KC_2, KC_3, KC_4, KC_5,                   KC_6, KC_7, KC_8, KC_9, KC_0,
        KC_EXLM, KC_AT, KC_LPRN, KC_RPRN, KC_NO,      KC_CIRC, KC_AMPR, KC_ASTR, KC_HASH, KC_DLR,
        KC_RCTL, KC_NO, KC_LEFT, KC_RGHT, KC_NO,        KC_NO, KC_UP, KC_DOWN, KC_LALT, KC_LSFT,
        LT(2, KC_NO), KC_BSPC, KC_DEL,                  KC_ENT, KC_SPC, LT(1, KC_NO)
    ),
    [2] = LAYOUT_split_3x5_3(
        KC_EQL, KC_NO, KC_NO, KC_NO, KC_NO,         KC_NO, KC_NO, KC_NO, KC_NO, KC_MINS,
        KC_GRV, KC_QUOT, KC_LT, KC_GT, KC_NO,       KC_LCBR, KC_LBRC, KC_RBRC, KC_RCBR, KC_SCLN,
        KC_RCTL, KC_NO, KC_PCMM, KC_DOT, KC_SLSH,   KC_LGUI, KC_NO, KC_NO, KC_LALT, KC_LSFT,
        LT(2, KC_NO), KC_BSPC, KC_DEL,              KC_ENT, KC_SPC, LT(1, KC_NO)
    ),
};
