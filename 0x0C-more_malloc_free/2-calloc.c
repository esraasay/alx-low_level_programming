#include <stdlib.h>
#include "main.h"




/**
 *_calloc - allocates memory for an array
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


