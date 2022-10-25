#include "main.h"

/**
* rev_string - function that reverses a string
* @*s: string to be reversed
*/

void rev_string(char *s)
{
	int i, arrItem, count = 0;
	char c[];

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		arrItem = 0;
		c[arrItem] = s[i];
		arrItem++;
	}
	_putchar('\n');
}
