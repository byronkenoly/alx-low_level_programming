#include "main.h"

/**
* puts_half - prints half of a string
* @str: string to be printed
*/

void puts_half(char *str)
{
	int i, halfPoint, n, count = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	if ((count % 2) == 0)
	{
		halfPoint = count / 2;

		for (i = halfPoint; i < count; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		n = (count + 1) / 2;

		for (i = n; i < count; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
