#include "main.h"
/**
 * _memset - fill a Block of memory With a specific value
 * @s: Starting Address of Memory to be filled
 * @b: The desired value
 * @n: Number of bytes to be changed
 *
 * Return: Changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int e = 0;

	for (; n > 0; e++)
	{
		s[e] = b;
		n--;
	}
	return (s);
}


