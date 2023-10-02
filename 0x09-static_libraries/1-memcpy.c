#include "main.h"
/**
 *_memcpy - a function That copies memory Area
 *@dest: memory where is Stored
 *@src: memory where is Copied
 *@n: number of bytes
 *
 *Return: copied memory With n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int y = n;

	for (; k < y; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}

