#include <stdio.h>

/**
*
*Main -entry point
*Return: always 0(Success)
*/

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x == 9)
		{
			putchar(x);
		}
		else
		{
			putchar(x);
			putchar(', ');
		}
	}
	
	putchar('\n');
	return (0);
}
