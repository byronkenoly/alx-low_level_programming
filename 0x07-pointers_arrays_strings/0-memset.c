#include "main.h"

/**
  * _memset - fills memory with a constant byte
  * @s: memory area
  * @b: constant byte b
  * @n: bytes of memory
  *
  * Return: pointer to character
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
