#include "main.h"
/**
 * print_chessboard - Entry Point
 * @a: Array
 * Return: Always 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	int d;
	int y;

	for (d = 0; d < 8; d++)
	{
		for (y = 0; y < 8; y++)
			_putchar(a[d][y]);
		_putchar('\n');
	}
}

