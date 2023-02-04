#include "hash_tables.h"

/**
  * key_index - function that gives you index of a key
  * @key: key
  * @size: size of array of hashtable
  *
  * Return: index at which key value pair should be stored
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, hash_key;

	hash = hash_djb2(key);
	hash_key = hash % size;

	return (hash_key);
}
