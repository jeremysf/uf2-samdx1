#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define __SAMD21E18A__ 1

// #define CRYSTALLESS    1

#define VENDOR_NAME "Ian Gordon"
#define PRODUCT_NAME "Twokey"
#define VOLUME_LABEL "UPDATE"

#define USB_VID 0x03EB   // Atmel
#define USB_PID 0x2402   // Generic HID device

#define BOARD_ID "twokey"

#define BOARD_RGBLED_CLOCK_PIN            PIN_PA07
#define BOARD_RGBLED_DATA_PIN             PIN_PA06

// #define LED_PIN PIN_PA17


#endif
