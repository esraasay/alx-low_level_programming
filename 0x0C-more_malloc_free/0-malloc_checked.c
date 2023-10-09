#include <stdlib.h>
#include "main.h"



/**
 * *malloc_checked - allocates memory with malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *z;

	z = malloc(b);

	if (z == NULL)
		exit(98);

	return (z);
}

