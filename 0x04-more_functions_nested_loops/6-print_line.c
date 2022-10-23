#include "main.h"

/**
* print_line - draws straight line in the terminal
*
* Returns: no value
*/

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; i < n; x++)
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
