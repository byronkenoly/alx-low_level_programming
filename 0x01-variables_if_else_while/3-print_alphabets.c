#include <stdio.h>

/**
*
*Main - entry point
*Return: always 0(Success)
*/

int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);

	putchar("\n");
	return(0);
}
