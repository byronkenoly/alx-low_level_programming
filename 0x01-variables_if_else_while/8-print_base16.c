#include <stdio.h>

/**
  * main - entry point
  *
  * Return: 0
  */

int main(void)
{
	int x, alphabet;

	for (x = 48; x < 58; x++)
		putchar(x);

	for (alphabet = 97; alphabet <= 102; alphabet++)
		putchar(alphabet);

	putchar('\n');
	return (0);
}
