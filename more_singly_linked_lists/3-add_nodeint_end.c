#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to address of first node.
 * @n: number in the node.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *aux = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode)
	{
		if (*head == NULL)
			*head = newNode;
		else
		{
			/* loop to give address of last node by putting null to aux->next */
			while (aux->next != NULL)
				aux = aux->next;
			/* make newNode last node */
			aux->next = newNode;
		}
		newNode->n = n;
		newNode->next = NULL;
	}
	else
		free(newNode);
	return (newNode);
}
