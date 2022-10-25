#include "main.h"

/**
* _puts - prints string to console
* @str: string to be printed to console
*/

void _puts(char *str)
{
	int i, count = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
