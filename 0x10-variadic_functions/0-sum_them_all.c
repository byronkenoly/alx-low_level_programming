#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - sums all parameters
* @n: number of arguments to be evaluated
*
* Return: sum of the parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	int i, x, sum = 0;
	va_list args;

	va_start(args, n);
	
	if (n == 0) return (0);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}

	return (sum);
}
