#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - executes function on each array element
* @array: array to be looped through
* @size: size of the array
* @action: function pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
