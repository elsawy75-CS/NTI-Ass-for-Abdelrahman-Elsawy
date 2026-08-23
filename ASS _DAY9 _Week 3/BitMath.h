#ifndef _COMMON_BITMATH_H
#define _COMMON_BITMATH_H

#define BIT_SET(Reg,BitNo)       Reg|=(1<<BitNo)
#define BIT_CLR(Reg,BitNo)       Reg&=~(1<<BitNo)
#define BIT_FLIP(Reg,BitNo)      Reg^=(1<<BitNo)
#define BIT_GET(Reg,BitNo)       (Reg>>BitNo)&0x01

#endif
