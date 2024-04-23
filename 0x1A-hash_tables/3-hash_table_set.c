#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht:The hash table you want to add or update the key/value to
 * @key:The key
 * @value:  is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newnode;

	index = hash_djb2((unsigned char *)key) % ht->size;

	newnode = malloc(sizeof(hash_node_t));

	if (newnode == NULL)
		return (0);
	newnode->key = strdup(key);
	if (newnode->key == NULL)
	{
		free(newnode->key);
		free(newnode);
		return (0);
	}
	
	newnode->value = strdup(value);
	if (newnode->value == NULL)
	{
		free(newnode->value);
		free(newnode);
		return (0);
	}
	newnode->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = newnode;
	}
	else
	{
		newnode->next = ht->array[index];
		ht->array[index] = newnode;
	}
	return (1);
}
