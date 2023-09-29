#include "main.h"
/**
 * _strlen_recursion - Returns the string length.
 * @s: The string to be measured.
 * Return:The string length.
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}

	return (l);
}

