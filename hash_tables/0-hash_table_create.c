#include "hash_tables.h"
/**
 * hast_table_create - creates hash tables.
 * @size: size of the array.
 * Return: a pointer to a newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable = malloc(sizeof(hash_table_t) * size);

	if (!newTable)
		return (NULL);
	return (newTable);
}
