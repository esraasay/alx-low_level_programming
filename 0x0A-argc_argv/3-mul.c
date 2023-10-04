#include <stdio.h>
#include <stdlib.h>




/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return:1,otherwise 0
 */
int main(int argc, char *argv[])
{
	int i , s;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		s = 1;

		for (i = 1; i < 3; i++)
		s *= atoi(argv[i]);

		printf("%d\n", s);
	}
	return (0);
}
