#include "lists.h"

/**
  * _strlen - returns string length
  * @str: string whose length is to be determined
  *
  * Return: length of string
  */

unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (*(str + i) != 0)
		i++;

	return (i);
}

/**
  * add_node_end - adds node at end of a list
  * @head: node head
  * @str: string stored in node
  *
  * Return: address of new element
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *addrss, *temp;

	addrss = malloc(sizeof(list_t));

	if (addrss == NULL)
		return (NULL);

	addrss->str = strdup(str);

	if ((addrss->str) == NULL)
	{
		free(addrss);
		return (NULL);
	}
	addrss->len = _strlen(addrss->str);
	addrss->next = NULL;

	if (*head == NULL)
	{
		*head = addrss;
		return (addrss);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = addrss;

	return (addrss);
}
