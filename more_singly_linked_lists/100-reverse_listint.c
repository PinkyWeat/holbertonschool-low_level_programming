#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to first node.
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	revMe(*head, head);
	return (*head);
}
/**
 * revMe - aux revs recursively linked list.
 * @head: pointer to first node.
 * @headRef: refd of head.
 * Return: first node but reversed.
 */
listint_t *revMe(listint_t *head, listint_t **headRef)
{
	listint_t *first = head, *rest;

	/* empty list base case */
	if (head == NULL)
		return (NULL);

	/* first (1, 2, 3) - rest (2, 3) */
	rest = first->next;

	/* list has only one node base case */
	if (rest == NULL)
	{
		/* fix head here */
		*headRef = first;
		return (*headRef);
	}

	/* recursively reverse smaller case */
	revMe(rest, headRef);

	/* put first item at end of list */
	rest->next = first;
	first->next = NULL;
	return (first);
}
