#include QMK_KEYBOARD_H

// Define the layers
#define _BASE       0

enum uno_keycode {
  UNO = SAFE_RANGE
};

#define CUSTOM_STRING "monday. Das schoenste am Montag sind die neuen Herausforderungen."

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record -> event.pressed) {
        switch (keycode) {
            case UNO:
                SEND_STRING(CUSTOM_STRING SS_TAP(X_ENTER));
                return false;
        }
    }
    return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /**
     * ┌───┐
     * │UNO│
     * └───┘
     */
    [_BASE] = LAYOUT(
        UNO
    ),

};
