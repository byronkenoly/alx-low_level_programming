#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: array to be looped through
* @size: number of array elements
* @cmp: pointer to function used to compare values
*
* Return: index of first element for which cmp doesn't return 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
