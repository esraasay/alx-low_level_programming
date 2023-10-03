#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/**
 * main - Print The name of the program
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])

{

	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))

		{
		str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}

				else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);
	return (0);
}

