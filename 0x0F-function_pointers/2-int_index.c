#include "function_pointers.h"


/**
 * int_index - return index location if comparison = true, -1 otherwise
 * @array: Array
 * @size: size of elements in array
 * @cmp: Pointer to func from one of the 3 in main
 * Return value: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
