#include "main.h"

/**
  * print_times_table - prints n times table
  * n: determines size of table
  */

void print_times_table(int n)
{
	int row, col, product, false_tens, ones;

	for (row = 0; row <= n; row++)
	{
		if (n < 0 || n > 15)
			break;

		for (col = 0; col <= n; col++)
		{
			product = row * col;
			if (col == 0)
			{
				_putchar('0');
			}
			
			if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else if (product > 9)
			{
				false_tens = product / 10;
				ones = product % 10; 
				_putchar(',');
				_putchar(' ');
				if (product < 100)
					_putchar(' ');
				if (false_tens < 10)
					_putchar('0' + false_tens);
				else
				{
					_putchar('0' + (false_tens / 10));
					_putchar('0' + (false_tens % 10));
				}
				_putchar('0' + ones);
			}
		}
		_putchar('\n');
	}
}
