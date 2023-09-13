#include "main.h"

/**
* print_sign - check if the letter is small,
* Description: unction takes an integer n as input
* If n is greater than zero, it prints a plus sign (+) and returns 1.
* If n is equal to zero, it prints the number 0 and returns 0.
* If n is less than zero, it prints a minus sign (-) and returns -1.
* @n: is a parameter that represents an integer input
* Return: Returns either -1, 0 or 1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{

		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}


