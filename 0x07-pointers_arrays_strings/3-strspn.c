#include "main.h"
/**
 * _strspn - Entry Point
 * @s: input
 * @accept: Input
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int u = 0;
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
			{
				u++;
				break;
			}
			else if (accept[t + 1] == '\0')
				return (u);
		}
		s++;
	}
	return (u);
}

