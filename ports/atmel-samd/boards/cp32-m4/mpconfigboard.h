#define MICROPY_HW_BOARD_NAME "CP32-M4"
#define MICROPY_HW_MCU_NAME "samd51j20"

#define MICROPY_HW_APA102_MOSI   (&pin_PA12)
#define MICROPY_HW_APA102_SCK    (&pin_PA13)


#define CIRCUITPY_MCU_FAMILY samd51

#define MICROPY_PORT_A (PORT_PA08 | PORT_PA09 | PORT_PA10 | PORT_PA11| PORT_PA12| PORT_PA13)
#define MICROPY_PORT_B        ( PORT_PB10 | PORT_PB11)
#define MICROPY_PORT_C        (0)
#define MICROPY_PORT_D        (0)

#define AUTORESET_DELAY_MS 500

// If you change this, then make sure to update the linker scripts as well to
// make sure you don't overwrite code
#define CIRCUITPY_INTERNAL_NVM_SIZE 8192

#define BOARD_FLASH_SIZE (FLASH_SIZE - 0x4000 - CIRCUITPY_INTERNAL_NVM_SIZE)

#define DEFAULT_I2C_BUS_SCL (&pin_PB09)
#define DEFAULT_I2C_BUS_SDA (&pin_PB08)

#define DEFAULT_SPI_BUS_SCK (&pin_PA22)
#define DEFAULT_SPI_BUS_MOSI (&pin_PA23)
#define DEFAULT_SPI_BUS_MISO (&pin_PA21)

#define DEFAULT_UART_BUS_RX (&pin_PB17)
#define DEFAULT_UART_BUS_TX (&pin_PB16)
