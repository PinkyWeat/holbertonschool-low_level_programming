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
	listint_t *newNode, *aux = *head;
	unsigned int counter;

	/* space for new node */
	newNode = malloc(sizeof(listint_t));
	/* check space */
	if (!newNode)
		return (NULL);
	/* loop through until index */
	for (counter = 0; counter < (idx - 1) && aux; counter++)
	{
		if (*head == NULL)
			return (NULL);
		aux = aux->next;
	}
	/* Give address */
	newNode->next = aux->next;
	/* Add new node at idx */
	aux->next = newNode;
	/* fill in info of newNode */
	newNode->n = n;
	return (newNode);
}
