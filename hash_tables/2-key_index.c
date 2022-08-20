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
	char *aux = NULL;
	hash_node_t *newNode = malloc(sizeof(hash_node_t));

	if (!ht) /* Check if hash table */
	{
		free(newNode);
		return (0);
	}
	if (!newNode) /* Check malloc */
		return (0);
	if (!key) /* Key cannot be empty */
		return (0);
	newNode->key = key; /* sino se le agrega entonces */
	if (!ht->array) /* Check if hay algo en el lugar de array*/
	{
		free(ht->array); /* y lo libera */
		ht->array = NULL;
	}
	if (value) /* Check value before adding it */
		aux = strdup(value); /* something so dup */
	else
	{
		free(aux);
		aux = NULL; /* empty string*/
	}
	newNode->value = aux; /* le puse value */
	if (ht->array)/* ver sobre el next de newNode comoo NULL ponele*/
	

	if (key == )
	{ /* si no tiene value hay que agregar */
		newNode->value = value;
		newNode->key = 
	}
}
