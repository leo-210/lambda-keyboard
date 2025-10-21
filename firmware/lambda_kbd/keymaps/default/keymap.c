#include QMK_KEYBOARD_H
#include "keymap_bepo.h"

enum layer_names {
        BASE,
        NAV,
        NUM,
        MEDIA,
        SYM,
        ACCENTS,
        FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [BASE] = LAYOUT_split_3x5_3(
                BP_B,              BP_EACU,            BP_P,               BP_O,               BP_W,            BP_M,    BP_V,               BP_D,               BP_L,               BP_J, 
                MT(KC_LGUI, BP_A), MT(MOD_LALT, BP_U), MT(MOD_LCTL, BP_I), MT(MOD_LSFT, BP_E), BP_COMM,         BP_C,    MT(MOD_LSFT, BP_T), MT(MOD_LCTL, BP_S), MT(MOD_LALT, BP_R), MT(KC_LGUI, BP_N), 
                BP_Z,              BP_Y,               BP_X,               BP_DOT,             BP_K,            BP_QUOT, BP_Q,               BP_G,               BP_H,               BP_F, 

                LT(MEDIA, KC_ESC), LT(NUM, KC_SPC), LT(NAV, KC_TAB),                                            LT(SYM, KC_ENT), LT(ACCENTS, KC_BSPC), LT(FN, KC_DEL)
        ),
        [NAV] = LAYOUT_split_3x5_3(
                KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,         KC_AGAIN, KC_PGUP, KC_UP, KC_PGDN, KC_UNDO,
                KC_LGUI, MOD_LALT, MOD_LCTL, MOD_LSFT, KC_NO,         KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO,
                KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,         KC_INS, KC_PASTE, KC_COPY, KC_CUT, KC_END,
                
                KC_NO, KC_NO, KC_NO,                                  KC_ENT, KC_BSPC, KC_DEL
        ),
        [NUM] = LAYOUT_split_3x5_3(
                KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,         BP_ASTR, BP_7, BP_8, BP_9, BP_PERC,
                KC_LGUI, MOD_LALT, MOD_LCTL, MOD_LSFT, KC_NO,         BP_PLUS, BP_4, BP_5, BP_6, BP_0,
                KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,         BP_MINS, BP_1, BP_2, BP_3, BP_EQL,
                
                KC_NO, KC_NO, KC_NO,                                  KC_ENT, KC_BSPC, KC_DEL
        ),
        [MEDIA] = LAYOUT_split_3x5_3(
                KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,         UG_TOGG, UG_NEXT,   UG_HUEU,   UG_SATU,   UG_VALU,
                KC_LGUI, MOD_LALT, MOD_LCTL, MOD_LSFT, KC_NO,         KC_NO, KC_MPRV, KC_VOLU, KC_VOLD, KC_MNXT,
                KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,         KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
                
                KC_NO, KC_NO, KC_NO,                                  KC_MSTP, KC_MPLY, KC_AUDIO_MUTE
        ),
        [SYM] = LAYOUT_split_3x5_3(
                BP_AMPR, BP_PIPE, BP_EXLM, BP_AT,   BP_ASTR,         KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO,
                BP_DLR,  BP_DQUO, BP_LPRN, BP_RPRN, BP_SLSH,         KC_NO, MOD_LSFT, MOD_LCTL, MOD_LALT, KC_LGUI,
                BP_LABK, BP_RABK, BP_LCBR, BP_RCBR, BP_BSLS,         KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO,
                
                KC_ESC, KC_SPC, KC_TAB,                              KC_NO, KC_NO, KC_NO
        ),
        [ACCENTS] = LAYOUT_split_3x5_3(
                KC_NO,   KC_NO,   KC_NO,   BP_OE,   BP_EGRV,         KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO,
                BP_AE,   BP_UGRV, BP_DCIR, BP_EURO, BP_CCED,         KC_NO, MOD_LSFT, MOD_LCTL, MOD_LALT, KC_LGUI,
                BP_ECIR, BP_AGRV, BP_DIAE, BP_DGRV, BP_ACUT,         KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO,
                
                KC_ESC, KC_SPC, KC_TAB,                              KC_NO, KC_NO, KC_NO
        ),
        [FN] = LAYOUT_split_3x5_3(
                KC_F12, KC_F7, KC_F8, KC_F9, KC_PSCR,          KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO,
                KC_F11, KC_F4, KC_F5, KC_F6, KC_SCRL,          KC_NO, MOD_LSFT, MOD_LCTL, MOD_LALT, KC_LGUI,
                KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUSE,         KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO,
                
                KC_ESC, KC_SPC, KC_TAB,                       KC_NO, KC_NO, KC_NO
        ),      
};

