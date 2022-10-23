#include "main.h"

/**
* print_numbers - prints numbers from 0-9 followed by newline
*/

void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
