#include "main.h"

/**
* factorial - computes factorial of integer
* @n: number whose factorial is to be computed
*
* Return: factorial of n
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return n * factorial(n - 1);
	}
}
