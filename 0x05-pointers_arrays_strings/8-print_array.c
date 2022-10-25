#include "main.h"

/**
* print_array - prints elements of an array
* @a: pointer to an integer
* @n: represents no. of elements in the array
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(a + i));
	}
	_putchar('\n');
}
