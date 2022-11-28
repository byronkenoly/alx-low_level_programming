#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	char *string;
	list_s_Pointer temp;

	string = strdup(str);
	temp  = malloc(sizeof(list_t));

	temp->str = string;
	temp->next = head;

	head = *temp;
	
	if (head)
		return (head);
	else
		return (NULL);
}
