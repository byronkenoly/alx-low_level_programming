#include "main.h"

/**
  * _strspn - gets length of prefix substring
  * @s: string segment
  * @accept: bytes to be searched
  *
  * Return: no. of bytes in s present in accept
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (*(accept + i) != '\0')
	{
		while (*(s + j) != '\0')
		{
			if (*(accept + i) == *(s + j))
				break;
			j++;
		}
		i++;
	}

	return (i);
}
