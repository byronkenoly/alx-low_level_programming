#include "main.h"

/**
* print_numbers - prints numbers from 0-9 followed by newline
*
* Return: no value
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
