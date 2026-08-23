#include "Atmega32Register.h"
#include "BitMath.h"
#include <stdint.h>

int main(void)
{
    DDRA_R = 0xAB;
    BIT_SET(PORTA_R, 0);
    BIT_SET(PORTA_R, 1);
    BIT_SET(PORTA_R, 3);
    BIT_SET(PORTA_R, 5);
    BIT_SET(PORTA_R, 7);

    return 0;
}
