#include "main.h"

/**
* _strlen - returns the length of the string
* @s: pointer to a string
*
* Return: integer which is the length of string
*/

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return count;
}
