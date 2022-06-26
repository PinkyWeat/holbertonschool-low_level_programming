#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range - function that creates an array of integers.
 * @min: value.
 * @max: value.
 * Return: pointer to new array or NULL.
 */
int *array_range(int min, int max)
{
	int *array;
	int len, i;

	if (min > max)
		return (NULL); /* base case */
	len = max - min + 1;
	array = malloc(len * sizeof(int));
	if (array == NULL)
		return (NULL); /* found */
	for (i = 0; min <= max; i++, min++)
		array[i] = min; /* filling */
	return (array);
}
