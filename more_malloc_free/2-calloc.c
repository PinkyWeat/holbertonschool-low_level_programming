#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: num of elements
 * @size: bytes of each element.
 * Return: a pointer to the allocated mem or NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (size == 0 || nmemb == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	memset(array, 0, nmemb * size);
	return (array);
}
