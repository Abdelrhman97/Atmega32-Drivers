
#include "DIO.h" 

void SetPinDirction (PORTS Port, u8 PinNumber, DirState  Dir)
{
	switch (Port)
	{
		case A: 
			if (Dir == OUTPUT)
			{
				SetBit(DDRA,PinNumber); 
			}
			else if (Dir == INPUT)
			{
				 ClearBit(DDRA,PinNumber);
			}
			else if (Dir == INPUT_PULLUP)
			{
				ClearBit(DDRA,PinNumber);
				SetBit(PORTA,PinNumber);
			}				
			break;
		case B: 
			if (Dir == OUTPUT)
			{
				SetBit(DDRB,PinNumber); 
			}
			else if (Dir == INPUT)
			{
				 ClearBit(DDRB,PinNumber);
			}
			else if (Dir == INPUT_PULLUP)
			{
				ClearBit(DDRB,PinNumber);
				SetBit(PORTB,PinNumber);
			}
			break; 
		case C: 
			if (Dir == OUTPUT)
			{
				SetBit(DDRC,PinNumber); 
			}
			else if (Dir == INPUT)
			{
				 ClearBit(DDRC,PinNumber);
			}
			else if (Dir == INPUT_PULLUP)
			{
				ClearBit(DDRC,PinNumber);
				SetBit(PORTC,PinNumber);
			}
			break; 
		case D: 
			if (Dir == OUTPUT)
			{
				SetBit(DDRD,PinNumber); 
			}
			else if (Dir == INPUT)
			{
				 ClearBit(DDRD,PinNumber);
			}
			else if (Dir == INPUT_PULLUP)
			{
				ClearBit(DDRD,PinNumber);
				SetBit(PORTD,PinNumber);
			}
			break; 
	}
}
void SetPortDirction(PORTS Port, DirState  Dir)
{
		switch (Port)
		{
			case A:
			if (Dir == OUTPUT)
			{
				DDRA = 0xff; 
			}
			else if (Dir == INPUT)
			{
				DDRA = 0x00; 
			}
			break;
			case B:
			if (Dir == OUTPUT)
			{
				DDRB = 0xff; 
			}
			else if (Dir == INPUT)
			{
				DDRB = 0x00; 
			}
			break;
			case C:
			if (Dir == OUTPUT)
			{
				DDRC = 0xff; 
			}
			else if (Dir == INPUT)
			{
				DDRC = 0x00; 
			}
			break;
			case D:
			if (Dir == OUTPUT)
			{
				DDRD = 0xff; 
			}
			else if (Dir == INPUT)
			{
				DDRD = 0x00; 
			}
			break;
		}
}	

void SetPinValue (PORTS Port, u8 PinNumber, u8 Val)
{
	switch (Port)
	{
		case A: 
			if (Val == HIGH)
			{
				SetBit(PORTA,PinNumber); 
			}
			else if (Val == LOW)
			{
				 ClearBit(PORTA,PinNumber);
			}
			break;
		case B: 
			if (Val == HIGH)
			{
				SetBit(PORTB,PinNumber); 
			}
			else if (Val == LOW)
			{
				 ClearBit(PORTB,PinNumber);
			}
			break; 
		case C: 
			if (Val == HIGH)
			{
				SetBit(PORTC,PinNumber); 
			}
			else if (Val == LOW)
			{
				 ClearBit(PORTC,PinNumber);
			}
			break; 
		case D: 
			if (Val == HIGH)
			{
				SetBit(PORTD,PinNumber); 
			}
			else if (Val == LOW)
			{
				 ClearBit(PORTD,PinNumber);
			}
			break; 
	}
}

void SetPortValue (PORTS Port, u8 Val)
{
		switch (Port)
		{
			case A:
				PORTA = Val;
				break;
			case B:
				PORTB = Val;
				break;
			case C:
				PORTC = Val;
				break;
			case D:
				PORTD = Val;
				break;
		}
			
}
 
u8 GetPinValue (PORTS Port, u8 PinNumber)
{
	volatile u8 ret_val = LOW; 
	switch (Port)
	{
		case A: 
			if (BitIsSet(PINA,PinNumber))
			{
				ret_val = HIGH; 
			}
			else if (BitIsClear(PINA,PinNumber))
			{
				ret_val = LOW;
			}
			break;
		case B: 
			if (BitIsSet(PINB,PinNumber))
			{
				ret_val = HIGH; 
			}
			else if (BitIsClear(PINB,PinNumber))
			{
				ret_val = LOW;
			}
			break;
		case C: 
			if (BitIsSet(PINC,PinNumber))
			{
				ret_val = HIGH; 
			}
			else if (BitIsClear(PINC,PinNumber))
			{
				ret_val = LOW;
			}
			break;
		case D: 
			if (BitIsSet(PIND,PinNumber))
			{
				ret_val = HIGH; 
			}
			else if (BitIsClear(PIND,PinNumber))
			{
				ret_val = LOW;
			}
			break;
	}
	
	return ret_val;
}

u8 GetPortValue (PORTS Port)
{
	volatile u8 ret_val;
	
	switch (Port)
	{
		case A: 
			ret_val = PINA; 
			break;
		case B: 
			ret_val = PINB; 
			break;
		case C: 
			ret_val = PINC; 
			break;
		case D: 
			ret_val = PIND; 
			break;
		
		
	}
	return ret_val; 
}
