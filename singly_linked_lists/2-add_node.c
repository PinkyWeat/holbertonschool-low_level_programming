#include "lists.h"
/**
 * add_node - adds a new node at the beginning.
 * @head: first node.
 * @str: what will be added.
 * Return: address of new element or NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	/* checking malloc */
	if (newNode == NULL)
		return (NULL);
	/* creating new node */
	newNode->str = strdup(str); /* links data part */
	newNode->len = strlen(str); /* links address part */
	newNode->next = *head; /* new address */
	*head = newNode; /* be first node */
	return (newNode);
}
