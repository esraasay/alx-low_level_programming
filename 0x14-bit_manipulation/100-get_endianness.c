#include "main.h"

/**
 * get_endianness - prog checks the Endianness.
 *
 * Return: 0 if big endian, 1 if little Endian.
 */
int get_endianness(void)
{
	int s;
	char *b;

	s = 1;
	b = (char *)&s;
	return (*b);
}
