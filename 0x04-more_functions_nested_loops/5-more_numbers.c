#include "main.h"

/**
* more_numbers - prints 10x the numbers from 0 to 14
*
* Return: no value
*/

void more_numbers(void)
{
	int x = 0;
	int num, ones, tens;

	while (x < 10)
	{
		for (num = 0; num < 15; num++)
		{
			if (num < 10)
				ones = num;
			else
			{
				tens = num / 10;
				ones = num % 10;
				_putchar('0' + tens);
			}
			_putchar('0' + ones);
		}
		x++;
		_putchar('\n');
	}
}
