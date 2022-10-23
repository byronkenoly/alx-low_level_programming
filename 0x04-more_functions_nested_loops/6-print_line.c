#include "main.h"

/**
* print_line - draws straight line in the terminal
* @n: no. of times the character should be printed
*/

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
