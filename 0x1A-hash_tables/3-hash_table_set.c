#include <stdlib.h>
#include "hash_tables.h"

/**
  * create_node - creates node by allocating memory for key & value
  * @key: pointer to key
  * @value: pointer to value
  *
  * Returns: pointer to the node
  */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = (hash_node_t*) malloc(sizeof(hash_node_t));

	node->key = (const char*) malloc(strlen(key) + 1);
	node->value = (const char*) malloc(strlen(key) + 1);

	strcpy(node->key, key);
	strcpy(node->value, value);

	return (node);
}

/**
  * hash_table_set - adds element to hash table
  * @ht: pointer to hash_table_t
  * @key: pointer to key
  * @value: pointer to value
  *
  * Returns: 1 if success, else 0
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	
	/*creating the hash node*/
	hash_node_t *element = create_node(key, value);

	/*computing index of key*/
	index = key_index(key, ht->size);
	
	hash_node_t *current_element = ht->array[index];

	if (current_item == NULL)
		ht->array[index] = element;
