#include <stdio.h>

/**
*
*Main - entry point
*Return - always 0(Success)
*/

int main(void)
{
	int x, alphabet;
	
	for (x = 0; x < 10; x++)
		putchar(x);

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);

	putchar("\n");
	return (0);
}
