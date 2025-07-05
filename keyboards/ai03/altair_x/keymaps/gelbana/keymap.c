/* Copyright 2024 ai03 Design Studio */
/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_TAB,         KC_Q,         KC_W,         KC_F,         KC_P,         KC_B,   XXXXXXX, XXXXXXX, KC_J,  KC_L,         KC_U,         KC_Y,         KC_SCLN,      KC_BSPC,
        LCTL_T(KC_ESC), LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G,   XXXXXXX, XXXXXXX, KC_M , LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I), LGUI_T(KC_O), KC_QUOT,
        SC_LSPO,        KC_Z,         KC_X,         KC_C,         KC_D,         KC_V,   XXXXXXX, XXXXXXX, KC_K,  KC_H,         KC_COMM,      KC_DOT,       KC_SLSH,      SC_RSPC,
                                      KC_LGUI,      KC_LALT,      LT(1, KC_ESC),KC_SPC, LT(2, KC_ENT),LT(3, KC_TAB),  LT(4, KC_RALT), TG(5)
    ),

    [1] = LAYOUT(
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_CAPS, KC_BSPC,
        _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,CW_TOGG, KC_DEL,
        _______, XXXXXXX, _______, _______, _______, XXXXXXX, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,  XXXXXXX,
                                   _______, _______, MO(1),   _______, _______, MO(3),   _______, QK_BOOT
    ),

    [2] = LAYOUT(
        _______, XXXXXXX,  KC_7,   KC_8,   KC_9, KC_PERC, _______, _______, _______, _______, KC_UP,   _______, _______, KC_BSPC,
        _______, KC_COLN,  KC_4,   KC_5,   KC_6, KC_PIPE, _______, _______, _______, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, _______,
        _______, KC_GRAVE, KC_1,   KC_2,   KC_3, KC_BSLS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_DOT,  XXXXXXX, XXXXXXX,
                                   _______,KC_DOT, KC_0, KC_MINUS, _______, MO(2),   _______, _______
    ),

    [3] = LAYOUT(
        _______, XXXXXXX, KC_AMPR, KC_ASTR, KC_LPRN, XXXXXXX, _______, _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
        _______, XXXXXXX, KC_DLR,  KC_PERC, KC_CIRC, XXXXXXX, _______, _______, KC_MINS,  KC_EQL, KC_LCBR, KC_RCBR, KC_PIPE,  KC_GRV,
        _______, KC_TILD, KC_EXLM,   KC_AT, KC_HASH, KC_PIPE, XXXXXXX, XXXXXXX, KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS, KC_TILD,
                                   _______, XXXXXXX,  MO(3),  KC_UNDS, _______, MO(3),   _______, _______
    ),

    [4] = LAYOUT(
        _______,  KC_F12, KC_F7,  KC_F8,   KC_F9,   XXXXXXX, _______, _______,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______,  KC_F11,  KC_F4,   KC_F5,   KC_F6, XXXXXXX, _______, _______,  XXXXXXX, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, XXXXXXX,
        _______, KC_F10,  KC_F1,   KC_F2,   KC_F3, XXXXXXX , XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,

                                   _______, XXXXXXX,  MO(3), _______, _______, MO(3),   _______, _______
    ),

    [5] = LAYOUT(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    XXXXXXX, XXXXXXX, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
LCTL_T(KC_ESC),  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    XXXXXXX, XXXXXXX, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX, XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
                                   KC_LGUI, KC_LALT, KC_LCTL, KC_SPC,  KC_ENT,  KC_TAB,  KC_RALT, TG(5)
    ),

};
