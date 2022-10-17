#include <stdio.h>

/**
*
*Main - entry point
*Return: always 0(Success)
*/

int main(void)
{
	int alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	
	putchar("\n");
	return (0);
}
