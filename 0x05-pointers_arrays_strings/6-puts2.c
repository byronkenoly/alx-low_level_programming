#include "main.h"

/**
* puts2 - skips one character when printing string to console
* @*str: pointer to a string
*/

void puts2(char *str)
{
	int i, count = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
