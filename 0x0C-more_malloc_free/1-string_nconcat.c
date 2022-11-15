#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
* @s1: pointer to first string
* @s2: pointer to second string
* @n: number of bytes of second string
*
* Return: pointer that points to newly allocated space
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;

