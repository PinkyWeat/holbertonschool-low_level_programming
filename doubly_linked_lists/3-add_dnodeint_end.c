#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to a pointer to first node.
 * @n: data.
 * Return: addie to new element or NULL if failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t)), *aux;

	if (!newNode)
		return (NULL);
	/* fill in info */
	newNode->n = n;
	newNode->next = NULL;
	/* if null head puts a node as "last" */
	if (!*head)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	aux = *head;
	/* loops to find the last node */
	while (aux->next != NULL)
		aux = aux->next;
	/* puts newNode last and puts info */
	aux->next = newNode;
	newNode->prev = aux;
	return (newNode);
}
