#ifndef DIO_H
#define DIO_H

#include "Config.h"

typedef enum 
{
	A,
	B,
	C,
	D,
}PORTS;




void SetPinDirction (PORTS Port, u8 PinNumber, DirState Dir); 
void SetPortDirction (PORTS Port, DirState Dir);

void SetPinValue (PORTS Port, u8 PinNumber, u8 Val); 
void SetPortValue (PORTS Port, u8 Val);

u8 GetPinValue (PORTS Port, u8 PinNumber);
u8 GetPortValue (PORTS Port);

#endif 