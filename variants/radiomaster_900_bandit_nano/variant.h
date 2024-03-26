// https://radiomasterrc.com/products/bandit-nano-expresslrs-rf-module
#include <NeoPixelBus.h>

// 0.96" OLED
#define I2C_SDA 14
#define I2C_SCL 12

// NO GPS - but free solder pads are available
#undef GPS_RX_PIN
#undef GPS_TX_PIN

#define LORA_DIO0 22
#define LORA_DIO1 21
#define LORA_SCK 18
#define LORA_MISO 19
#define LORA_MOSI 23
#define LORA_CS 4 // NSS
#define LORA_RESET 5
#define LORA_TXEN 33
#define RF95_FAN_EN 2

#define LED_PIN 15  // RGB LED

#define BUTTON_PIN 39 // Joystick
#define BUTTON_NEED_PULLUP

#undef EXT_NOTIFY_OUT

// SX1276 900 Mhz LoRa module
#define USE_RF95 // RFM95/SX127x
#define RF95_CS LORA_CS
#define RF95_DIO1 LORA_DIO1
#define RF95_TXEN LORA_TXEN
#define RF95_RESET LORA_RESET
#define RF95_MAX_POWER 20

// This module has PA
#define RF95_PA_EN 26 //  power_apc2
#define RF95_PA_DAC_EN
// Mapping of PA_LEVEL to Power output:
// 168 -> 100mW
// 148 -> 250mW
// 128 -> 500mW
// 90  -> 1000mW
#define RF95_PA_LEVEL 90