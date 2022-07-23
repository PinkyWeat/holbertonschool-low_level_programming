#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to a pointer to the first node.
 * @n: data.
 * Return: addie of new elemnt or NULL if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	/* check malloc */
	if (newNode == NULL)
		return (NULL);
	/* fill in info */
	newNode->n = n;
	newNode->prev = NULL;
	/* puts it first */
	if (*head)
	{
		newNode->next = *head;
		(*head)->prev = newNode;
	}
	else
		newNode->next = NULL;
	*head = newNode;
	return (newNode);
}
