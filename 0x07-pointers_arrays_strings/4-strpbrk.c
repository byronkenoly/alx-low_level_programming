#include "main.h"

/**
  * _strpbrk - searches string for any of a set of bytes
  * @s: string
  * @accept: bruuh
  *
  * Return: pointer to byte in s
  */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
				return (&(*(s + i)));
			j++;
		}
		i++;
	}

	return (NULL);
}
