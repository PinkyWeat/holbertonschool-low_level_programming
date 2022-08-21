#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int kindex;
	hash_node_t *before = NULL, *aux = NULL;

	if (ht)
	{
		for (kindex = 0; kindex < ht->size; kindex++)
		{
			before = ht->array[kindex];
			while (before)
			{
				aux = before->next;
				free(before->key);
				free(before->value);
				free(before);
				before = aux;
			}
		}
		free(ht->array);
		free(ht);
	}
}
