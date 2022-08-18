#include "hash_tables.h"
/**
 * hash_table_create - creates hash tables.
 * @size: size of the array.
 * Return: a pointer to a newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (!newTable)
		return (NULL);
	newTable->size = size;
	newTable->array = malloc(sizeof(hash_node_t *) * size);
	if (!newTable->array)
	{
		free(newTable);
		return (NULL);
	}
	for (; i < size; i++)
	{
		newTable->array[i] = NULL;
	}
	return (newTable);
}
