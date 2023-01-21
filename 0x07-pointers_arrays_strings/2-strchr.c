#include "main.h"

/**
  * _strchr - function that locates character in a string
  * @s: pointer to string
  * @c: character
  *
  * Return: pointer to first occurence of char c
  */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (&(*(s + i)));
		i++;
	}

	return (NULL);
}
