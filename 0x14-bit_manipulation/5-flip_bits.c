#include "main.h"

/**
 * flip_bits - return number of bits that would need to be flipped
 * to transform one num to another.
 * @n: the first number.
 * @m: the second number.
 * Return: number of bits to flip To convert numbers.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorvalue = n ^ m;
	unsigned int c = 0;

	while (xorvalue)
	{
		if (xorvalue & 1ul)
		c++
		xorvalue = xorvalue >> 1;
	}
	return (c);
	}
