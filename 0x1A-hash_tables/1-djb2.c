#include "hash_tables.h"
/**
  * hash_djb2 - function implementing the djb2 algorithm
  * @str: a string to generate the hash function.
  * Return: hash value
  */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int count;

	hash = 5381;
	while ((count = *str++))
	{
		hash = ((hash << 5) + hash) + count;
	}
	return (hash);
}
