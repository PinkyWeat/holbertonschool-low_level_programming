#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: first node.
 * @n: data for node.
 * Return: address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
	int num = n;

	newNode = malloc(sizeof(listint_t));
	/* checks malloc */
	if (!newNode)
		return (NULL);
	/* creating new node */
	newNode->n = num;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
