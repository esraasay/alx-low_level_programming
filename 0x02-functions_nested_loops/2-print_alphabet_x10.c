#include "main.h"

/**
* print_alphabet_x10 - prints alphabets 10 times,
* Description: prints alphabets 10 times using print_alphabet.
* Return: Always Returns Nothing
*/
void print_alphabet_x10(void)
{
	const char *alphabet    = "abcdefghijklmnopqrstuvwxyz";
	int i, j                = 0;

	for (j = 0; j < 10; j++)
	{
		while (alphabet[i] != '\0')
		{
			_putchar(alphabet[i]);
			i++;
		}
		i = 0;
		_putchar('\n');
	}
}
