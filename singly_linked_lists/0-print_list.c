#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: elements.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int counter = 0;
	char *str = h->str;
	unsigned int len = h->len;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%i] [%s]", len, str);
			counter++;
		}
		h = h->next;
	}
	return (counter);
}
