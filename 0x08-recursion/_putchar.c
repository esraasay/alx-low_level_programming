#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the Character c to Stdout
 * @c: The character to Print
 *
 * Return: On Success 1.
 * On error, -1 is Returned, and errno is set Appropriately.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
