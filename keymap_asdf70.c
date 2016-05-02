#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: qwerty ansi */
  KEYMAP(
        ESC, F1, F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11,   F12, INS, HOME,PGUP,  \
        GRV, 1,   2,        3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,PGDN, \
        TAB,      Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,DEL, \
        CAPS,     A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT, END,  \
        LSFT,          Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,UP,  FN1, \
        LCTL,     LGUI,LALT,        SPC,                  RALT,FN0, RCTL,LEFT,DOWN,RIGHT),

  /* 1: FN 1 ansi */
  KEYMAP(
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, MPRV, MPLY, MNXT, MUTE, VOLD, VOLU, TRNS, TRNS,TRNS, \
        TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,TRNS, \
        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,TRNS, \
        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       ENT, TRNS, \
        TRNS,             TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, UP,  TRNS, \
        TRNS,       TRNS, TRNS,			 			  TRNS, 									TRNS, TRNS, TRNS, LEFT, DOWN,RIGHT),

  /* 1: FN 2 ansi */
  KEYMAP(
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS, \
        TRNS,             TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS,       TRNS, TRNS, 						TRNS,									  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS),
};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),
  [1] = ACTION_LAYER_MOMENTARY(2),
};
