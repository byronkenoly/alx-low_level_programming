#include <stdlib.h>
#include "hash_tables.h"

/**
  * hash_table_create - function that creates a hash table
  * @size: size of the array
  *
  * Return: pointer to the newly created hash table
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = (hash_table_t *) malloc(sizeof(hash_table_t) * size);

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));

	if (table->array == NULL)
		return (NULL);

	free(table);

	return (table);
}
