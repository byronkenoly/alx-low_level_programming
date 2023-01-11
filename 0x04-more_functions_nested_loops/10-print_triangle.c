#include "main.h"

/**
  * print_triangle - prints a triangle
  * @size: determines triangle size
  */

void print_triangle(int size)
{
	int x, z, count, y = 1, symbol = 35;

	if (size <= 0)
		_putchar('\n');

	z = size;
	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			count = 0;
			while (y < z)
			{
				_putchar(' ');
				y++;
				count++;
			}
			y = 1;
			z--;

			while (count < size)
			{
				_putchar(symbol);
				count++;
			}
			_putchar('\n');
		}
	}
}
