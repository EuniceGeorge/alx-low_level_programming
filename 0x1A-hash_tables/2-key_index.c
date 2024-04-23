#include "hash_tables.h"

/**
 * key_index - A function that gives you the index of a key.
 * @key: The key to be converted
 * @size: The size of the array of the hash table
 * Return: the index at which the key should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
