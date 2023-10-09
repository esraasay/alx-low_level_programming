#include <stdlib.h>
#include "main.h"




/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */


int *array_range(int min, int max)
{
	int *m;
	int y, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	m = malloc(sizeof(int) * size);

	if (m == NULL)
		return (NULL);

	for (y = 0; min <= max; y++)
		m[y] = min++;

	return (m);
}

