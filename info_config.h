#ifndef INFO_CONFIG_H
#define INFO_CONFIG_H

// Include necessary headers
#include "quantum.h"

// Pin definitions for the matrix rows and columns
// Replace STM32-specific pins with RP2040 GPIOs based on your config.json
#define MATRIX_ROW_PINS { GP0, GP1, GP2, GP3, GP4 }
#define MATRIX_COL_PINS { GP5, GP6, GP7, GP8, GP9, GP10, GP11, GP12, GP13, GP14, GP15, GP16, GP17, GP18, GP19 }

// Define the number of rows and columns in your matrix (adjust as necessary)
#define MATRIX_ROWS 5
#define MATRIX_COLS 6

// Split keyboard configuration
#define SPLIT_KEYBOARD
#define SPLIT_MODS_LEFT
#define SPLIT_MODS_RIGHT

// Define the pins used for the encoder if needed
#define ENCODER_A_PIN GP14
#define ENCODER_B_PIN GP16

// Define any other GPIO pins used for RGB matrix or other features
#define RGB_PIN GP15

// If you have any indicator pins, you can define them here
#define CAPS_LOCK_PIN GP25  // Example pin for caps lock indicator

// Define the number of rows/columns for the split keyboard (left and right halves)
#define SPLIT_COUNT_LEFT 52
#define SPLIT_COUNT_RIGHT 52

// Diode direction configuration (ROW2COL or COL2ROW)
#define DIODE_DIRECTION ROW2COL

// Bootloader configuration (RP2040)
#define BOOTLOADER RP2040

// Enable features for bootmagic, NKRO, mousekeys, etc.
#define FEATURE_BOOTMAGIC
#define FEATURE_EXTRAS
#define FEATURE_MOUSEKEYS
#define FEATURE_NKRO

// RGB matrix configuration (from config.json)
#define RGB_MATRIX_DRIVER WS2812
#define RGB_MATRIX_PIN GP15

// Define your default animation and RGB settings
#define RGB_MATRIX_DEFAULT_ANIMATION "breathing"
#define RGB_MATRIX_DEFAULT_HUE 200
#define RGB_MATRIX_MAX_BRIGHTNESS 176

// Set up the processor (RP2040) and any other board-specific settings
#define PROCESSOR RP2040

// The matrix should be split into two halves (52 keys per half)
#define SPLIT_KEYBOARD_ENABLED
#define SPLIT_MATRIX_PIN_LEFT  GP4
#define SPLIT_MATRIX_PIN_RIGHT GP6

// Define layers, if you are using layers, set this to true
#define USE_LAYER_STATE

// Any custom keymaps or macros would be configured later, if needed

#endif // INFO_CONFIG_H
