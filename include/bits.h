#ifndef __BITS_H__
#define __BITS_H__

#include <LPC17xx.h>


typedef enum
{
	FALSE = 0,
	TRUE = 1
}BOOL;

#define set_bit(dest,pos)        ((dest) |= (1U << (pos)))
#define reset_bit(dest,pos)      ((dest) &= ~(1U << (pos)))

#define SET_BIT(dest,pos)        ((dest) |= (1U << (pos)))
#define CLEAR_BIT(dest,pos)      ((dest) &= ~(1U << (pos)))

#endif
