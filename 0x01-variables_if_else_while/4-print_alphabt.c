#include <stdio.h>

/**
*
*Main - entry point
*Return - always 0(Success)
*/

int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet < 'z'; alphabet++)
	{
		if (alphabet == 'e' || 'q')
			putchar('');
		else
			putchar(alphabet);
	}
	return(0);
}
