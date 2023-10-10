#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"


/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be Evaluated.
 *
 * Return: 0 if no-digit is found, 1 otherwise
 */


int is_digit(char *s)
{
	int k = 0;

	while (s[k])
	{
		if (s[k] < '0' || s[k] > '9')
			return (0);
		k++;
	}
	return (1);
}


/**
 * _strlen - returns the length of a string
 * @s: string to evaluate.
 *
 * Return: Length of the String
 */




int _strlen(char *s)
{
	int m = 0;

	while (s[m] != '\0')
	{
		m++;
	}
	return (m);
}

/**
 * main - multiplies two positive Numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: always 0 (success)
 */


int main(int argc, char *argv[])
{
	char *z1, *z2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	z1 = argv[1], z2 = argv[2];
	if (argc != 3 || !is_digit(z1) || !is_digit(z2))
		errors();
	len1 = _strlen(z1);
	len2 = _strlen(z2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = z1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(z2) - 1; len2 >= 0; len2--)
		{
			digit2 = z2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

