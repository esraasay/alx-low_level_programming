#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - appends n bytes of a string to another string
 * @s1: string to be appended to
 * @s2: String from which to concatenate
 * @n: Number of bytes of s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */



char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int z = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		s = malloc(sizeof(char) * (l1 + n + 1));
	else
		s = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!s)
		return (NULL);

	while (z < l1)
	{
		s[z] = s1[z];
		z++;
	}

	while (n < l2 && z < (l1 + n))
		s[z++] = s2[j++];

	while (n >= l2 && z < (l1 + l2))
		s[z++] = s2[j++];

	s[z] = '\0';

	return (s);
}

