#include <stdio.h>

/**
  * main - entry point
  *
  * Return: 0
  */

int main(void)
{
	long int x, y, fib;
	int count;
	
	x = 1;
	y = 2;
	printf("%ld, %ld, ", x, y);

	for (count = 0; count < 49; count++)
	{
		fib = x + y;

		if (count == 48)
		{
			printf("%ld\n", fib);
			break;
		}

		printf("%ld, ", fib);
		x = y;
		y = fib;
	}
	return (0);
}
