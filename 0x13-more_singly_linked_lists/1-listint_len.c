#include "lists.h"

/**
  * listint_len - returns number of elements in a linked list
  * @h: pointer to head of the list
  *
  * Return: number of elements in the list
  */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (i);

	while (h != NULL)
	{
		h = (*h).next;
		i++;
	}

	return (i);
}
