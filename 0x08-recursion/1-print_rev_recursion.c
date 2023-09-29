#include "main.h"
/**
 * _print_rev_recursion - Prints a String in reverse.
 * @s: The String to Be Printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

