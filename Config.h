#ifndef CONFIG_H
#define CONFIG_H

#include "STD_types.h" 
#include "BIT_Math.h" 

/* ---- Atmega32 ---- */ 

#define HIGH 1 
#define LOW 0 

#define OUTPUT 1 
#define INPUT 0 

/* ----- DIO Registers ---- */ 

/*
#define DDRA      *(volatile(u8* const)0x3A)
#define PORTA	  *(volatile(u8* const)0x3B)
#define PINA	  *(volatile(u8* const)0x39) 

#define DDRB      *(volatile(u8* const)0x37)
#define PORTB     *(volatile(u8* const)0x38)
#define PINB      *(volatile(u8* const)0x36)

#define DDRC      *(volatile(u8* const)0x34)
#define PORTC     *(volatile(u8* const)0x35)
#define PINC      *(volatile(u8* const)0x33)

#define DDRD      *(volatile(u8* const)0x31)
#define PORTD     *(volatile(u8* const)0x32)
#define PIND      *(volatile(u8* const)0x30)
 
*/

#define PORTA  *((volatile u8* const)0X3B)
#define DDRA   *((volatile u8* const)0X3A)
#define PINA   *((volatile u8* const)0X39)
#define PORTB  *((volatile u8* const)0X38)
#define DDRB   *((volatile u8* const)0X37)
#define PINB   *((volatile u8* const)0X36)
#define PORTC  *((volatile u8* const)0X35)
#define DDRC   *((volatile u8* const)0X34)
#define PINC   *((volatile u8* const)0X33)
#define PORTD  *((volatile u8* const)0X32)
#define DDRD   *((volatile u8* const)0X31)
#define PIND   *((volatile u8* const)0X30)

#endif