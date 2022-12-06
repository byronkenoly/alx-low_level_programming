#include "lists.h"

/**
  * free_listint - function frees a list
  * @head: pointer to head of list
  */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = (*head).next;
		free(tmp);
	}
}
