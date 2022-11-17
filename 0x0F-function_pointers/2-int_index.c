#include <stdlib.h>

/**
* int_index - searches for an integer
* @array: array to be looped through
* @size: number of array elements
* @cmp: pointer to function used to compare values
*
* Return: index of 1st item which cmp doesn't return 0
* -1 if no element matches
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	if (i == size)
		return (-1);

	return (-1);
}
