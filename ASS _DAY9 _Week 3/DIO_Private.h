#ifndef _GPIO_INTERNAL_H
#define _GPIO_INTERNAL_H

typedef enum
{
    GPIO_PORT_A,
    GPIO_PORT_B,
    GPIO_PORT_C,
    GPIO_PORT_D,
}GPIO_PortName_t;

typedef enum
{
    GPIO_PIN0,
    GPIO_PIN1,
    GPIO_PIN2,
    GPIO_PIN3,
    GPIO_PIN4,
    GPIO_PIN5,
    GPIO_PIN6,
    GPIO_PIN7,
}GPIO_PinNumber_t;


typedef enum
{
    GPIO_PIN_INPUT ,
    GPIO_PIN_OUTPUT,
    GPIO_PORT_INPUT=0x00,
    GPIO_PORT_OUTPUT=0xFF,
}GPIO_Direction_t;


typedef enum
{
    GPIO_PIN_LOW ,
    GPIO_PIN_HIGH,
    GPIO_PORT_LOW=0x00,
    GPIO_PORT_HIGH=0xFF,
}GPIO_Value_t;



#endif
