#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of Elements in the Array
 * @size: size of the Array
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int s, z;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	z = nmemb * size;

	p = malloc(z);
	if (p == NULL)
		return (NULL);

	for (s = 0; s < z; i++)
		p[s] = 0;

	return ((void *) p);
}
