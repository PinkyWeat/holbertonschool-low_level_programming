#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_array(unsigned int size, char c)
{
	char *first = malloc(size);
	unsigned int i;

	if (size == 0)
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
