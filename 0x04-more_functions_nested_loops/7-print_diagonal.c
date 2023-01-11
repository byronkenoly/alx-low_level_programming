#include "main.h"

/**
  * print_diagonal - draws diagonal line on terminal
  * @n: no. of times \ is to be printed
  */

void print_diagonal(int n)
{
	int x, y = 0, symbol = 92;

	if (n <= 0)
		_putchar('\n');

	x = n;
	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			while (y < x)
			{
				_putchar(' ');
				y++;
			}
			y = 0;
			_putchar(symbol);
			_putchar('\n');
		}
	}
}
