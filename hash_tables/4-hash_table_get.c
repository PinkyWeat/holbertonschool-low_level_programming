#include "hash_tables.h"
/**
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int kindex;
	hash_node_t *aux = NULL;

	if (!ht || !key) /* Check if they NULL*/
		return (NULL);
	kindex = key_index((const unsigned char *)key, ht->size); /* Find index */
	aux = ht->array[kindex]; /* grab info to find Linked List */

	while (aux) /* to search in a Linked List */
	{
		if (strcmp(aux->key, key) == 0)
			return (aux->value);
		aux = aux->next; /* Loop through */
	}
	return (NULL);
}
