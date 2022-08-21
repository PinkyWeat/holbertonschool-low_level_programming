#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table we'll print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int kindex = 0;
	hash_node_t *aux = NULL;
	char centinel = '\0';

	if (!ht)
		return;
	printf("{");
	while (kindex < ht->size) /* until kindex reaches size */
	{
		aux = ht->array[kindex]; /* Open Linked List*/
		while (aux)
		{
			if (centinel != '\0')
				printf(", ");
			printf("'%s': '%s'", aux->key, aux->value);
			if (centinel == '\0')
				centinel = '1';
			aux = aux->next;
		}
		kindex++;
	}
	printf("}\n");
}
