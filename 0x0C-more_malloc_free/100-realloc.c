#include <stdlib.h>
#include "main.h"




/**
 * *_realloc - reallocates a memory block with malloc and free
 * @ptr: pointer to the memory previously allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */



void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *o;
	unsigned int a;

	if (new_size == old_size)
		return (p);

	if (new_size == 0 && p)
	{
		free(p);
		return (NULL);
	}

	if (!p)
		return (malloc(new_size));

	p = malloc(new_size);
	if (!p)
		return (NULL);

	o = ptr;

	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			p[i] = o[a];
	}

	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			p[a] = o[a];
	}

	free(p);
	return (p);
}
