#include "DIO_Interface.h"

void GPIO_SetLineMode(const uint8_t PortName , const uint8_t PinNum,const uint8_t DirState)
{
    if ((PortName <= GPIO_PORT_D) &&
        (PinNum <= GPIO_PIN7))
    {
        switch (PortName)
        {
        case GPIO_PORT_A:
            if (DirState == GPIO_PIN_OUTPUT)
            {
                BIT_SET(DDRA_R, PinNum);
            }
            else if (DirState == GPIO_PIN_INPUT)
            {
                BIT_CLR(DDRA_R, PinNum);
            }
            else
            {
            }
            break;

        case GPIO_PORT_B:
            if (DirState == GPIO_PIN_OUTPUT)
            {
                BIT_SET(DDRB_R, PinNum);
            }
            else if (DirState == GPIO_PIN_INPUT)
            {
                BIT_CLR(DDRB_R, PinNum);
            }
            else
            {
            }
            break;

        case GPIO_PORT_C:
            if (DirState == GPIO_PIN_OUTPUT)
            {
                BIT_SET(DDRC_R, PinNum);
            }
            else if (DirState == GPIO_PIN_INPUT)
            {
                BIT_CLR(DDRC_R, PinNum);
            }
            else
            {
            }
            break;

        case GPIO_PORT_D:
            if (DirState == GPIO_PIN_OUTPUT)
            {
                BIT_SET(DDRD_R, PinNum);
            }
            else if (DirState == GPIO_PIN_INPUT)
            {
                BIT_CLR(DDRD_R, PinNum);
            }
            else
            {
            }
            break;

        default:
            break;
        }
    }
    else
    {
    }
}
void GPIO_SetBlockMode(const uint8_t PortName,  const uint8_t DirState)
{
    if (PortName <= GPIO_PORT_D)
    {
        switch (PortName)
        {
        case GPIO_PORT_A:
            if (DirState == GPIO_PORT_OUTPUT)
            {
                DDRA_R = 0xFF;
            }
            else if (DirState == GPIO_PORT_INPUT)
            {
                DDRA_R = 0x00;
            }
            else
            {
            }
            break;

        case GPIO_PORT_B:
            if (DirState == GPIO_PORT_OUTPUT)
            {
                DDRB_R = 0xFF;
            }
            else if (DirState == GPIO_PORT_INPUT)
            {
                DDRB_R = 0x00;
            }
            else
            {
            }
            break;

        case GPIO_PORT_C:
            if (DirState == GPIO_PORT_OUTPUT)
            {
                DDRC_R = 0xFF;
            }
            else if (DirState == GPIO_PORT_INPUT)
            {
                DDRC_R = 0x00;
            }
            else
            {
            }
            break;

        case GPIO_PORT_D:
            if (DirState == GPIO_PORT_OUTPUT)
            {
                DDRD_R = 0xFF;
            }
            else if (DirState == GPIO_PORT_INPUT)
            {
                DDRD_R = 0x00;
            }
            else
            {
            }
            break;

        default:
            break;
        }
    }
    else
    {
    }
}

void GPIO_SetLineLevel(const uint8_t PortName , const uint8_t PinNum,const uint8_t PinValue)
{
    if ((PortName <= GPIO_PORT_D) &&
        (PinNum <= GPIO_PIN7))
    {
        switch (PortName)
        {
        case GPIO_PORT_A:
            if (PinValue == GPIO_PIN_HIGH)
            {
                BIT_SET(PORTA_R, PinNum);
            }
            else if (PinValue == GPIO_PIN_LOW)
            {
                BIT_CLR(PORTA_R, PinNum);
            }
            else
            {
            }
            break;

        case GPIO_PORT_B:
            if (PinValue == GPIO_PIN_HIGH)
            {
                BIT_SET(PORTB_R, PinNum);
            }
            else if (PinValue == GPIO_PIN_LOW)
            {
                BIT_CLR(PORTB_R, PinNum);
            }
            else
            {
            }
            break;

        case GPIO_PORT_C:
            if (PinValue == GPIO_PIN_HIGH)
            {
                BIT_SET(PORTC_R, PinNum);
            }
            else if (PinValue == GPIO_PIN_LOW)
            {
                BIT_CLR(PORTC_R, PinNum);
            }
            else
            {
            }
            break;

        case GPIO_PORT_D:
            if (PinValue == GPIO_PIN_HIGH)
            {
                BIT_SET(PORTD_R, PinNum);
            }
            else if (PinValue == GPIO_PIN_LOW)
            {
                BIT_CLR(PORTD_R, PinNum);
            }
            else
            {
            }
            break;

        default:
            break;
        }
    }
    else
    {
    }
}
void GPIO_SetBlockLevel(const uint8_t PortName,  const uint8_t PortValue)
{
    if (PortName <= GPIO_PORT_D)
    {
        switch (PortName)
        {
        case GPIO_PORT_A:
            PORTA_R = PortValue;
            break;

        case GPIO_PORT_B:
            PORTB_R = PortValue;
            break;

        case GPIO_PORT_C:
            PORTC_R = PortValue;
            break;

        case GPIO_PORT_D:
            PORTD_R = PortValue;
            break;

        default:
            break;
        }
    }
    else
    {
    }
}

void GPIO_GetLineLevel(const uint8_t PortName , const uint8_t PinNum, uint8_t *pValue)
{
    if ((PortName <= GPIO_PORT_D) &&
        (PinNum <= GPIO_PIN7) &&
        (pValue != NULL))
    {
        switch (PortName)
        {
        case GPIO_PORT_A:
            *pValue = BIT_GET(PINA_R, PinNum);
            break;

        case GPIO_PORT_B:
            *pValue = BIT_GET(PINB_R, PinNum);
            break;

        case GPIO_PORT_C:
            *pValue = BIT_GET(PINC_R, PinNum);
            break;

        case GPIO_PORT_D:
            *pValue = BIT_GET(PIND_R, PinNum);
            break;

        default:
            break;
        }
    }
    else
    {
    }
}
void GPIO_GetBlockLevel(const uint8_t PortName , uint8_t *pValue)
{
    if ((PortName <= GPIO_PORT_D) &&
        (pValue != NULL))
    {
        switch (PortName)
        {
        case GPIO_PORT_A:
            *pValue = PINA_R;
            break;

        case GPIO_PORT_B:
            *pValue = PINB_R;
            break;

        case GPIO_PORT_C:
            *pValue = PINC_R;
            break;

        case GPIO_PORT_D:
            *pValue = PIND_R;
            break;

        default:
            break;
        }
    }
    else
    {
    }
}


void GPIO_FlipLine(const uint8_t PortName , const uint8_t PinNum)
{
    if ((PortName <= GPIO_PORT_D) &&
        (PinNum <= GPIO_PIN7))
    {
        switch (PortName)
        {
        case GPIO_PORT_A:
            BIT_FLIP(PORTA_R, PinNum);
            break;

        case GPIO_PORT_B:
            BIT_FLIP(PORTB_R, PinNum);
            break;

        case GPIO_PORT_C:
            BIT_FLIP(PORTC_R, PinNum);
            break;

        case GPIO_PORT_D:
            BIT_FLIP(PORTD_R, PinNum);
            break;

        default:
            break;
        }
    }
    else
    {
    }
}
void GPIO_FlipBlock(const uint8_t PortName )
{
    if (PortName <= GPIO_PORT_D)
    {
        switch (PortName)
        {
        case GPIO_PORT_A:
            PORTA_R = (uint8_t)~PORTA_R;
            break;

        case GPIO_PORT_B:
            PORTB_R = (uint8_t)~PORTB_R;
            break;

        case GPIO_PORT_C:
            PORTC_R = (uint8_t)~PORTC_R;
            break;

        case GPIO_PORT_D:
            PORTD_R = (uint8_t)~PORTD_R;
            break;

        default:
            break;
        }
    }
    else
    {
    }
}
