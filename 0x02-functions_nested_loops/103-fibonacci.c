#include <stdio.h>

/**
  * main - entry point
  *
  * Return: 0
  */

int main(void)
{
	long int x, y, fib, sum;

	x = 1;
	y = 2;
	sum = 0;
	
	fib = x + y;
	
	while (fib < 4000000)
	{
		fib = x + y;
		if (fib % 2 == 0)
			sum += fib;
		x = y;
		y = fib;
	}
	sum += 2;
	printf("%ld\n", sum);
	return (0);
}
