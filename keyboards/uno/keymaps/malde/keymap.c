#include QMK_KEYBOARD_H

// Define the layers
#define _BASE       0

enum uno_keycode {
  UNO = SAFE_RANGE
};

static uint16_t pressTimer = 0xFFFF;
#define RESET_LENGTH 3000

#define CUSTOM_STRING "monday. Das schoenste am Montag sind die neuen Herausforderungen."

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case UNO:
            if (record -> event.pressed) {
                pressTimer = timer_read();
            }
            else {
                uint16_t timeElapsed = timer_elapsed(pressTimer);
                if (timeElapsed < RESET_LENGTH) {
                    // Normal press. The might be logic here, or just a send string.
                    SEND_STRING(CUSTOM_STRING SS_TAP(X_ENTER));
                }
                else {
                    reset_keyboard();
                }
            }
        break;
    }
    return false;
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
