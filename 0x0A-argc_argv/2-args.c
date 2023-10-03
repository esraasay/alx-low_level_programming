#include <stdio.h>


/**
 * main - prints all arguments it receives
 * @argc: num of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */



int main(int argc, char *argv[])
{
	int y;

	for (y = 0; y < argc; y++)
	{
		printf("%s\n", argv[y]);
	}

	return (0);
}


