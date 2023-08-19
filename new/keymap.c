// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H
#include "keymap_spanish.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum ferris_layers {
  _QWERTY,
  _SYMBOL,
  _SHIFT_SYMBOLS,
  _ALTGR_SYMBOLS,
  _NUMBERS,
  _MOUSE,
  _MISC,
  _ARROWS,
};

enum ferris_tap_dances {
  TD_Q_ESC
};

#define KC_CTSC RCTL_T(KC_SCLN)
#define KC_CTLA LCTL_T(KC_A)
#define KC_LSHZ LSFT_T(KC_Z)
#define KC_RLSH RSFT_T(KC_SLSH)
#define KC_SPM2 
#define KC_GUTA GUI_T(KC_TAB)
#define KC_CLGV CTL_T(KC_GRV)
#define KC_LSFTA LSFT_T(KC_A)
#define KC_LCTLX LCTL_T(KC_X)
#define KC_LGUIZ LGUI_T(KC_Z)
#define KC_LALTC LALT_T(KC_C)
#define KC_SYM_D LT(_SYMBOL, KC_D)
#define KC_SSYM_F LT(_SHIFT_SYMBOLS, KC_F)
#define KC_ASYM_G LT(_ALTGR_SYMBOLS, KC_G)
#define KC_SYM_K LT(_SYMBOL, KC_K)
#define KC_SSYM_J LT(_SHIFT_SYMBOLS, KC_J)
#define KC_ASYM_H LT(_ALTGR_SYMBOLS, KC_H)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT( /* QWERTY */
    KC_Q,         KC_W,         KC_E,        KC_R,        KC_T,                 KC_Y,       KC_U,       KC_I,            KC_O,           KC_P,
    KC_LSFTA,     KC_S,         KC_SYM_D,    KC_SSYM_F,   KC_ASYM_G,            KC_ASYM_H,  KC_SSYM_J,  KC_SYM_K,        KC_L,           LSFT_T(KC_SCLN),
    KC_LGUIZ,     KC_LCTLX,     KC_LALTC,    KC_V,        KC_B,                 KC_N,       KC_M,       LALT_T(KC_COMM), LCTL_T(KC_DOT), ES_MINS,
                       LT(_MOUSE, KC_NO), LT(_ARROWS, KC_BSPC),                 LT(_MISC, KC_SPC), LT(_NUMBERS, KC_NO)
  ),

  //JUNTAR TODOS LOS SÍMBOLOS EN UNA CAPA o entre una capa y NUMBERS

  [_SYMBOL] = LAYOUT( /* SYMBOLS */
    ES_MORD,  KC_NO,    KC_NO,    KC_NO,    KC_NO,            KC_NO,    KC_NO,  KC_NO,    ES_QUOT,  ES_IEXL,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,            KC_NO,    KC_NO,  KC_NO,    ES_GRV,   ES_PLUS,
    ES_LABK,  KC_NO,    KC_NO,    KC_NO,    KC_NO,            KC_NO,    KC_NO,  KC_NO,    ES_ACUT,  KC_NO,
                                     KC_NO, KC_NO,            KC_NO,    KC_NO
  ),

  [_SHIFT_SYMBOLS] = LAYOUT( /* SHIFTED SYMBOLS */
    ES_EXLM,  ES_DQUO,  ES_BULT,  ES_DLR,   ES_PERC,          ES_AMPR,  ES_SLSH,  ES_EQL,   ES_QUES,   ES_IQUE,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,            KC_NO,    KC_NO,    KC_NO,    ES_CIRC,   ES_ASTR,
    ES_RABK,  KC_NO,    KC_NO,    KC_NO,    KC_NO,            KC_NO,    KC_NO,    KC_NO,    ES_LPRN,   ES_RPRN,
                                     KC_NO, KC_NO,            KC_NO,    KC_NO
  ),

  [_ALTGR_SYMBOLS] = LAYOUT( /* ALTGR SYMBOLS */
    ES_BSLS,  ES_PIPE,  ES_AT,    ES_HASH,   ES_TILD,          ES_EURO,  ES_NOT,  KC_NO,    KC_NO,     KC_NO,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,            KC_NO,    KC_NO,   KC_NO,    ES_LBRC,   ES_RBRC,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,            KC_NO,    KC_NO,   KC_NO,    ES_LCBR,   ES_RCBR,
                                      KC_NO, KC_NO,            KC_NO,    KC_NO
  ),

  [_NUMBERS] = LAYOUT( /* NUMBERS */
    KC_1,     KC_2,     KC_3,     KC_4,     KC_5,             KC_6,     KC_7,   KC_8,     KC_9,    KC_0,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,            KC_NO,    KC_NO,  KC_NO,    KC_NO,   KC_NO,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,            KC_NO,    KC_NO,  KC_NO,    KC_NO,   KC_NO,
                                     KC_NO, KC_NO,            KC_NO,    KC_NO
  ),

  // AÑADIR NAVEGACIÓN ej.: Cambiar de pestaña
  //
  [_MOUSE] = LAYOUT( /* MOUSE AND NAV */
    KC_NO,    KC_NO,  KC_NO,    KC_NO,   KC_NO,               KC_NO,    KC_BTN1,  KC_WH_U,    KC_BTN2,   KC_NO, 
    KC_NO,    KC_NO,  KC_NO,    KC_NO,   KC_NO,               KC_NO,    KC_MS_L,  KC_MS_D,    KC_MS_U,   KC_MS_R,
    KC_NO,    KC_NO,  KC_NO,    KC_NO,   KC_NO,               KC_NO,    KC_WH_L,  KC_WH_D,    KC_WH_R,   KC_NO, 
                                  KC_NO, KC_NO,               KC_NO,    KC_NO
  ),

  [_MISC] = LAYOUT( /* MISC */
    KC_NO,    KC_NO,    KC_NO,    KC_ESC,    KC_NO,            KC_NO,    KC_NO,  KC_NO,    KC_NO,   KC_NO,
    KC_LSFT,  KC_NO,    KC_NO,    KC_ENT,    KC_TAB,           KC_NO,    KC_NO,  KC_NO,    KC_NO,   KC_NO,
    KC_NO,    KC_NO,    KC_NO,    KC_CAPS,   KC_NO,            KC_NO,    KC_NO,  KC_NO,    KC_NO,   KC_NO,
                       KC_NO, LT(_ARROWS, KC_BSPC),            LT(_MISC, KC_SPC), KC_NO
  ),

  [_ARROWS] = LAYOUT( /* ARROWS */
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,            KC_NO,    KC_NO,  KC_NO,    KC_NO,     KC_NO,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,            KC_LEFT,  KC_UP,  KC_DOWN,  KC_RIGHT,   KC_NO,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,            KC_NO,    KC_NO,  KC_NO,    KC_NO,     KC_NO,
                      KC_NO, LT(_ARROWS, KC_BSPC),            LT(_MISC, KC_SPC), KC_NO
  ),

};

// Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Q, twice for ESC
    [TD_Q_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_ESC)
};
