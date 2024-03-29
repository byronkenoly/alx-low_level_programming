#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - function that prints strings
* @separator: string to be printed btwn strings
* @n: number of strings passed to function
* @...: other parameters
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char*);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (separator == NULL)
			continue;

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
