#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_array - creates an array of char
* @size: size of the array
* @c: char to initialize with
*
* Return: character
*/

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	t = malloc(sizeof(char) * size);

	if (t == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		t[i] = c;

	return (t);
}
