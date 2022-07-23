#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to a pointer to first node.
 * @idx: index.
 * @n: data.
 * Return: addie of new node or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t)), *aux;
	unsigned int index;

	/* check malloc */
	if (!newNode)
		return (NULL);
	/* data */
	newNode->n = n;
	/* checks if prev data */
	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));
	/* copy of h to aux */
	aux = *h;
	/* go to idx */
	for (index = 0; index < (idx - 1); index++)
	{
		aux = aux->next;
		if (!aux)
			return (NULL);
	}
	/**/
	if (aux->next == NULL)
		return (add_dnodeint_end(h, n));
	/* fill in info */
	newNode->next = aux->next;
	newNode->prev = aux;
	/* makes it nth */
	aux->next = newNode;
	aux = newNode->next;
	aux->prev = newNode;
	return (newNode);
}
