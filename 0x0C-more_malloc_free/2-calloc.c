#include <stdlib.h>
#include "main.h"



/**
 * *_memset - fills the memory with a constant byte
 * @s: memory area to be filled
 * @b: character to copy
 * @n: Number of b to be copied
 *
 * Returned value: Pointer to the memory area s
 */



char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		s[z] = b;
	}

	return (s);
}


/**
 * *_calloc - allocates memory for an array
 * @nmemb: Number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	_memset(m, 0, nmemb * size);

	return (m);
}


