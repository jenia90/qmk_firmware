#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT(
            KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                               KC_6,           KC_7,       KC_8,       KC_9,           KC_0,       KC_PIPE, 
            KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_PGUP,    KC_PSCR,    KC_Y,           KC_U,       KC_I,       KC_O,           KC_P,       KC_BSLS, 
            MO(1),      KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_PGDN,    KC_APP,     KC_H,           KC_J,       KC_K,       KC_L,           KC_SCLN,    KC_QUOT, 
            KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_GRV,     KC_DEL,     KC_N,           KC_M,       KC_COMM,    KC_DOT,         KC_SLSH,    KC_RSFT, 
            KC_LALT,    KC_MINS,    KC_EQL,     KC_LCBR,    KC_RCBR,    KC_LCTL,    KC_BSPC,    KC_ENT,     KC_SPC,         KC_LPRN,    KC_RPRN,    KC_LBRC,        KC_RBRC,    KC_RGUI
        ),
        [1] = LAYOUT(
            KC_F12,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,                              KC_F6,          KC_F7,      KC_F8,      KC_F9,          KC_F10,     KC_F11,
            KC_TRNS,    RGB_VAI,    RGB_VAD,    RGB_SPI,    RGB_SPD,    KC_TRNS,    RGB_MOD,    KC_TRNS,    LALT(KC_LEFT),  KC_HOME,    KC_END,     LALT(KC_RGHT),  KC_TRNS,    KC_TRNS, 
            KC_TRNS,    KC_CAPS,    RGB_HUI,    RGB_HUD,    KC_TRNS,    KC_TRNS,    RGB_RMOD,   RGB_VAD,    KC_LEFT,        KC_DOWN,    KC_UP,      KC_RGHT,        KC_TRNS,    KC_TRNS,
            KC_TRNS,    KC_TRNS,    RGB_SAI,    RGB_SAD,    KC_TRNS,    KC_TRNS,    RGB_TOG,    KC_INS,     KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS,    CW_TOGG,    
            KC_TRNS,    KC_TRNS,    KC_MPLY,    KC_MPRV,    KC_MNXT,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_VOLU,    KC_VOLD,    KC_MUTE,        KC_TRNS,    KC_TRNS
        )
};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    // caps lock cyan
    if (host_keyboard_led_state().caps_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(0, 0, 0, 128);
    } else {
        RGB_MATRIX_INDICATOR_SET_COLOR(0, 0, 0, 0);
    }

    // num lock cyan
    if (host_keyboard_led_state().num_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(1, 0, 0, 128);
    } else {
        RGB_MATRIX_INDICATOR_SET_COLOR(1, 0, 0, 0);
    }

    // scroll lock cyan
    if (host_keyboard_led_state().scroll_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(2, 0, 0, 128);
    } else {
        RGB_MATRIX_INDICATOR_SET_COLOR(2, 0, 0, 0);
    }

    // layer state
    switch (get_highest_layer(layer_state)) {
        case 1:
            RGB_MATRIX_INDICATOR_SET_COLOR(37, 0, 0, 128);
            break;
        case 2:
            RGB_MATRIX_INDICATOR_SET_COLOR(38, 0, 0, 128);
            break;
        case 3:
            RGB_MATRIX_INDICATOR_SET_COLOR(39, 0, 0, 128);
            break;
    }
    return false;
}