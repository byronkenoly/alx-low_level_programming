#include <stdio.h>

/**
  * main - entry point
  * num represents ascii values
  *
  * Return: 0
  */

int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
		putchar(num);

	putchar('\n');
	return (0);
}
