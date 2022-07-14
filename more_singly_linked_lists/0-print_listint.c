#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: elements to print.
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
