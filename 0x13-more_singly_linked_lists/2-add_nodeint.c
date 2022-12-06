#include "lists.h"

/**
  * add_nodeint - adds a new node at beginning of list
  * @head: head of linked list
  * @n: data to be added to node
  *
  * Return: address of new element
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	/*create a new linked list node*/
	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (newNode);

	(*newNode).n = n;

	/*next pointer of new node will point to head node of linked list*/
	(*newNode).next = *head;

	/*making new node head of linked list*/
	*head = newNode;

	return (newNode);
}
