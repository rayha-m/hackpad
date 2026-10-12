// Hackpad default keymap: 3 keys + a knob
// Wiring (from the KiCad board):
//   SW1 (top)     -> XIAO pin 11 (GP3)
//   SW2           -> XIAO pin 10 (GP4)
//   SW3           -> XIAO pin 9  (GP2)
//   Knob press    -> XIAO pin 1  (GP26)
//   Knob turn A/B -> XIAO pins 3 / 2 (GP28 / GP27)
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        LGUI(KC_C),   // SW1 (top):  Cmd+C  copy
        LGUI(KC_V),   // SW2:        Cmd+V  paste
        LGUI(KC_Z),   // SW3:        Cmd+Z  undo
        KC_MUTE       // knob press: mute
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    // turn left = volume down, turn right = volume up
    // (if it's backwards, swap KC_VOLD and KC_VOLU)
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif
