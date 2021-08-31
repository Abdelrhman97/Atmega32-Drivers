#ifndef MACROS_H
#define MACROS_H


#define SetBit(REG,BitNum) 		    REG |= (1 << BitNum)
#define ClearBit(REG,BitNum) 		REG &= ~(1 << BitNum)
#define ToggleBit(REG,BitNum) 		REG ^= (1 << BitNum)
#define BitIsSet(REG,BitNum)		REG & (1 << BitNum)
#define BitIsClear(REG,BitNum)		!(REG & (1 << BitNum))

#endif