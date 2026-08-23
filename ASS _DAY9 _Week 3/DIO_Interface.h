#ifndef _GPIO_API_H
#define _GPIO_API_H
#include <stdint.h>
#include "../BitMath.h"
#include "../Atmega32Register.h"
#include "DIO_Private.h"
#include "DIO_Config.h"


void GPIO_SetLineMode(const uint8_t PortName , const uint8_t PinNum,const uint8_t DirState);
void GPIO_SetBlockMode(const uint8_t PortName,  const uint8_t DirState);

void GPIO_SetLineLevel(const uint8_t PortName , const uint8_t PinNum,const uint8_t PinValue);
void GPIO_SetBlockLevel(const uint8_t PortName,  const uint8_t PortValue);

void GPIO_GetLineLevel(const uint8_t PortName , const uint8_t PinNum, uint8_t *pValue);
void GPIO_GetBlockLevel(const uint8_t PortName , uint8_t *pValue);


void GPIO_FlipLine(const uint8_t PortName , const uint8_t PinNum);
void GPIO_FlipBlock(const uint8_t PortName );
#endif
