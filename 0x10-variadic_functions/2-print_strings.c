#include "variadic_functions.h"



/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to print between strings.
 * @n: The number of strings to pass to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it will not be printed.
 * If any of the strings is NULL, (null) will be printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *s;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		s = va_arg(strings, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}


