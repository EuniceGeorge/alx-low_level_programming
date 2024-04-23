#include "hash_tables.h"
/**
  * hash_table_create - creates a hash table.
  * @size: size of the hash table.
  * Return: pointer to the hash table
  */

hash_table_t *hash_table_create(unsigned long int size){
	
	unsigned long int i;
	hash_table_t *newtable;

	newtable = malloc(sizeof(hash_table_t));
	newtable->size = size;

	if(size <= 0)
		return (NULL);
	newtable->array = malloc(sizeof(hash_table_t)*size);
	if (!newtable->array)
	{
		free(newtable);
		return (NULL);
	}
	for (i = 0; i < size; i++){
		newtable->array[i] = NULL;
	}
	return newtable;
}
