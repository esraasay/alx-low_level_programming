#include "main.h"
#include <stdlib.h>




/**
 * create_array - creates an array of size size and assigns char c to it
 * @size: size of the array
 * @c: character to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if failed
 *
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}

