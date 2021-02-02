#include QMK_KEYBOARD_H

#define _BASE 0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(
    /*
     * ┌────┬────┬────┐
     * │Prev│Play│Next│
     * ├────┼────┼────┤
     * │Home│Prnt│End │
     * ├────┼────┼────┤
     * │PgUp│ Up │PgDn│
     * ├────┼────┼────┤
     * │Left│Down│Rght│
     * └────┴────┴────┘
     */
        KC_MPRV, KC_MPLY, KC_MNXT,
        KC_HOME, KC_PSCR, KC_END,
        KC_PGUP, KC_UP,   KC_PGDN,
        KC_LEFT, KC_DOWN, KC_RGHT
    )

};
