#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hast table we are adding/updating the key/value to.
 * @key: the key.
 * @value: the value.
 * Return: 1 on success, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int kindex;
	hash_node_t *newNode = NULL, *aux = NULL;

	if (!ht || !key) /* Check if they have info */
		return (0);
	index = key_index(key, ht->size); /* save index*/
	aux = ht->array[kindex];

	while (aux)
	{
		if (strcmp(aux->, key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			return (1);
		}
		aux = aux->next;
	}
	newNode = malloc(sizeof(*newNode));
	if (!newNode)
		return (0); /* check malloc */
	/* fill in info */
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = NULL;

	if (ht->array[kindex] == NULL)
	{
		ht->array[kindex] = newNode;
		return (1);
	}
	newNode->next = ht->array[kindex];
	ht->array[kindex] = newNode;
	return (1);
}
