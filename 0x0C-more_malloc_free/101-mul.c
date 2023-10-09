#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"


/**
 * is_digit - checks if  string contains  non-digit characters
 * @s: string to evaluate
 *Returns: 0
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
 * _strlen – returns the length of the string
 * @s: string to evaluate
 *
 * Return value: length of  string
 */





int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
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
	char *r1, *r2;
	int l1, l2, len, i, carry, dig1, dig2, *result, a = 0;

	r1 = argv[1], r2 = argv[2];
	if (argc != 3 || !is_dig(r1) || !is_dig(r2))
		errors();
	l1 = _strlen(r1);
	l2 = _strlen(r2);
	len = l1 + l2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= l1 + l2; i++)
		result[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		dig1 = r1[l1] - '0';
		carry = 0;
		for (l2 = _strlen(r2) - 1; l2 >= 0; l2--)
		{
			dig2 = r2[l2] - '0';
			carry += result[l1 + l2 + 1] + (dig1 * dig2);
			result[l1 + l2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[l1 + l2 + 1] += carry;
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
