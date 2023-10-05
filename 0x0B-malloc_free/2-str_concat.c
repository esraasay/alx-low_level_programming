#include "main.h"
#include <stdlib.h>



/**
 * str_concat - determines the ends of the input and adds them to the size
 * @s1: input one to join
 * @s2: Input two to concat
 * Return: concat of s1 and s2
 */


char *str_concat(char *s1, char *s2)
{
	unsigned int y, j, n, l;
	char *s;

	if (s1 == NULL)
		y = 0;
	else
	{
		for (y = 0; s1[y]; y++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	n = y + j + 1;
	s = malloc(n * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (l = 0; l < y; l++)
		s[l] = s1[l];
	for (l = 0; l < j; l++)
		s[l + y] = s2[l];
	s[y + j] = '\0';
	return (s);
}

