// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *           ┌───┐                   ┌───┐
      *           │GUI├───┐           ┌───┤Alt│
      *           └───┤Bsp├───┐   ┌───┤Ent├───┘
      *               └───┤spc│   │spc├───┘
      *                   └───┘   └───┘
      */
    [0] = LAYOUT_split_3x5_3(
        KC_Q, KC_W, KC_E, KC_R, KC_T,     KC_Y, KC_U, KC_I, KC_O, KC_P,
        MT(MOD_LALT, KC_A), MT(MOD_LGUI, KC_S), MT(MOD_LSFT, KC_D), MT(MOD_LCTL, KC_F), KC_G     KC_H, MT(MOD_RCTL, KC_J), MT(MOD_RSFT, KC_K), MT(ESC, KC_F), MT(MOD_RALT, KC_SCLN),
        KC_Z, KC_X, KC_C, KC_V, KC_B,     KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
            KC_NO, LT(2, KC_TAB), KC_SPC,   KC_BSPC,  KC_ENT,  KC_NO
    )
    [1] = LAYOUT_split_3x5_3(
        KC_1, KC_2, KC_3, KC_4, KC_5,     KC_6, KC_7, KC_8, KC_9, KC_0,
        KC_LBRC, KC_RBRC, KC_MINS, KC_EQL, KC_NO ,     KC_LFET, KC_DOWN, KC_UP, KC_RIGHT,KC_QUOT,
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,     KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,

           KC_NO,KC_NO,KC_LSFT,  KC_MPLY,KC_MNXT,KC_NO
    )
};
