#ifndef CUSTOM_BOARD_H
#define CUSTOM_BOARD_H

#define EXT_DIG1 2 /* On the USB Port P2 (D-), and P3 of the spring connector */
#define EXT_DIG2 3 /* On the USB Port P3 (D+), and P4 of the spring connector */

#define RX_PIN_NUMBER EXT_DIG2 // NRF UART peripherial's RX
#define TX_PIN_NUMBER EXT_DIG1 // NRF UART peripherial's TX
#define CTS_PIN_NUMBER 0xFFFFFFFF // NRF_UARTE_PSEL_DISCONNECTED
#define RTS_PIN_NUMBER 0xFFFFFFFF // NRF_UARTE_PSEL_DISCONNECTED

#define BOARD_LED_RED 11

#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

#define HWFC false

#endif
