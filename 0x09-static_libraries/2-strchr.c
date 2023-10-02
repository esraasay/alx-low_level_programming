#include "main.h"
/**
 * _strchr - Entry Point
 * @s: Input
 * @c: input
 * Return: Always 0 (success)
 */
char *_strchr(char *s, char c)
{
	int z = 0;

	for (; s[z] >= '\0'; z++)
	{
		if (s[z] == c)
			return (&s[z]);
	}
	return (0);
}

