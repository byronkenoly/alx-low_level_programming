/**
  * _strcpy - copies string pointed to by src
  * @dest: destination
  * @src: source
  *
  * Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	unsigned int i = 0;
	int count = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	count = i + 1;

	*(dest + count) = '\0';

	return (dest);
}
