#include "main.h"
#include <stdlib.h>



/**
 * argstostr - main entry
 * @ac: int entry
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int x, n, r = 0, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (n = 0; av[x][n]; n++)
			l++;
	}
	l += ac;

	s = malloc(sizeof(char) * l + 1);
	if (s == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
	for (n = 0; av[x][n]; n++)
	{
		s[r] = av[x][n];
		r++;
	}
	if (s[r] == '\0')
	{
		s[r++] = '\n';
	}
	}
	return (s);
}

