#include "main.h"

/**
* print_last_digit - Print the last digit of an integer.
*
* @n: The integer from which to extract and print the last digit.
*
* Return: The value of the last digit.
*/
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');

	return (last_digit);
}


