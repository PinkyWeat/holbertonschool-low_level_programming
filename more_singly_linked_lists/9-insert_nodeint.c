#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to a pointer of first nodes address.
 * @idx: index of list where new node should be added
 * @n: data for new node.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	istint_t *newNode, *aux = *hea;
	unsigned int counter = 0;

	/* space for new node */
	newNode = malloc(sizeof(listint_t));
	/* check space */
	if (!newNode)
		return (NULL);
	newNode->n = n;
	/* Make it first node */
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	/* loop through until index */
	while (counter < (idx - 1) && aux)
	{
		if (aux->next == NULL)
			return (NULL);
		counter++;
		aux = aux->next;
	}
	/* Give address */
	newNode->next = aux->next;
	/* Add new node at idx */
	aux->next = newNode;

	return (newNode);
}
