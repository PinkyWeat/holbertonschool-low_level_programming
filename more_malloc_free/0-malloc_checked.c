#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: what we want to allocate.
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int *array;

	array = malloc(b);
	if (array == NULL)
	{
		free(array);
		exit(98);
	}
	return (array);
}
