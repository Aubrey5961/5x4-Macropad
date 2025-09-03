// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

// Custom code for a 5x4 macropad

#include QMK_KEYBOARD_H

enum custom_keycodes {
    STEAM = SAFE_RANGE,
    VAL,
    UPDATES,
    F18,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case STEAM:
        if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_LGUI) SS_DELAY(50) "steam" SS_DELAY(50) SS_TAP(X_ENT));
        } else {

        }
        break;
    
    case VAL:
        if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_LGUI) SS_DELAY(50) "valorant" SS_DELAY(50) SS_TAP(X_ENT));
        } else {

        }
        break;
    
    case UPDATES:
        if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_LGUI) SS_DELAY(50) "steam" SS_DELAY(50) SS_TAP(X_ENT) SS_DELAY(50) SS_TAP(X_LGUI) SS_DELAY(50) "epic game" SS_DELAY(50) SS_TAP(X_ENT) SS_DELAY(50) SS_TAP(X_LGUI) SS_DELAY(50) "riot client" SS_DELAY(50) SS_TAP(X_ENT));
        } else {

        }
        break;

    // Macro script
    case F18:
        if (record->event.pressed) {
            // Fill with set macro script
        } else {

        }
        break;
    }
    return true;
    
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *
     * ┌─────────┬───────────┬───────┬───────┬───────┐
     * │   PWR   │   RESET   │  PREV │  PLAY │  NEXT │
     * ├─────────┼───────────┼───────┼───────┼───────┤
     * │   F13   │    F14    │  F15  │  F16  │  F17  │
     * ├─────────┼───────────┼───────┼───────┼───────┤
     * │   CALC  │ PRNT_SCRN │  VAL  │ NUM_8 │ STEAM │
     * ├─────────┼───────────┼───────┼───────┼───────┤
     * │ UPDATES │    F18    │ NUM_4 │ NUM_2 │ NUM_6 │
     * └─────────┴───────────┴───────┴───────┴───────┘
     *
     * F13 - Discord Mute
     * F14 - Discord Defean
     * F15 - Discord Screen Share
     * F16 - Discord Disconnect
     * F18 - macro script
     * UPDATES - Launches: Epic Games, Steam, Riot Client
     * 
     */
     
    [0] = LAYOUT_ortho_5x4( // sideways 90 deg ccw
        UPDATES, KC_CALC, KC_F13, KC_PWR,
        F18, KC_PSCR, KC_F14, QK_RBT,
        KC_P4, VAL, KC_F15, KC_MPRV,
        KC_P2, KC_P8, KC_F16, KC_MPLY,
        KC_P6, STEAM, KC_F17, KC_MNXT
    ),
};

