#pragma once

#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN B6     // USART TX pin
#define SERIAL_USART_RX_PIN B7     // USART RX pin

/* RGBLIGHT configuration */
#define WS2812_DI_PIN C12
#define RGBLED_NUM 2
#define RGBLED_MAP { 1, 0 }
#define RGBLED_SPLIT { 1, 1 }
#define RGBLIGHT_LAYERS
#define RGBLIGHT_MAX_LAYERS 9
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_CHRISTMAS
//#define RGBLIGHT_EFFECT_RAINBOW_SWIRL

#define FORCE_NKRO

#define SPLIT_HAND_PIN B4

#define USB_VBUS_PIN A15
#undef  SPLIT_USB_DETECT
