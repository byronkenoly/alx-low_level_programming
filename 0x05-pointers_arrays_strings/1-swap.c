#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: first pointer to int
* @b: second pointer to int
*/

void swap_int(int *a, int *b)
{
	int x = *a, y = *b;
	*a = y;
	*b = x;
}
