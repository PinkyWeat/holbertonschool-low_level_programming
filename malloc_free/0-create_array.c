#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - create arrayo of chars, starts with specific chr.
 * @size: size.
 * @c: the char we will initialize the array with.
 * Return: a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *first = malloc(size);
	unsigned int i;

	if (size == 0 || first == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		first[i] = c;
	}
	first[i] = '\0';
	return (first);
}
