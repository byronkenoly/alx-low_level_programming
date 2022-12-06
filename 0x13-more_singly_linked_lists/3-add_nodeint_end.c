#include "lists.h"

/**
  * add_nodeint_end - adds new node to end of list
  * @head: pointer to pointer of head of list
  * @n: data to be stored in node
  *
  * Return: address of new element
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*new node at end of list*/
	listint_t *newNode, *tmp;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	(*newNode).n = n;
	(*newNode).next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	tmp = *head;
	/*Traverse from head to last node*/
	while (tmp->next != NULL)
		tmp = tmp->next;

	/*Insert newNode after last node*/
	tmp->next = newNode;

	return (newNode);
}
