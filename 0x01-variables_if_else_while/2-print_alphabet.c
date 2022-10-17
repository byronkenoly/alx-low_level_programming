#include <stdio.h>

/**
*
*Main - entry point
*Return - always 0(success)
*/

int main(void)
{
	char alphabet = "a";

	while (alphabet <= "z")
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
