#include <stdio.h>

/**
  * main - entry point
  *
  * Return: 0
  */

int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x == 57)
			break;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
