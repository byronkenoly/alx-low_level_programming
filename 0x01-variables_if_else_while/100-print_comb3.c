#include <stdio.h>

/**
  * main - entry point
  *
  * Return: 0
  */

int main(void)
{
	int i, j, k;

	k = 48;
	for (i = 48; i < 58; i++)
	{
		for (j = k; j < 58; j++)
		{
			if (i == j)
				continue;
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				continue;
			putchar(',');
			putchar(' ');
		}
		k++;
	}
	putchar('\n');
	return (0);
}
