#include "lists.h"

/**
  * print_listint - prints all elements of a list
  * @h: pointer to head of list
  *
  * Return: the number of nodes
  */

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
	{
		return (i);
	}
	else
	{
		while (h != NULL)
		{
			printf("%d\n", (*h).n);
			h = (*h).next;
			i++;
		}
	}
	return (i);
}
