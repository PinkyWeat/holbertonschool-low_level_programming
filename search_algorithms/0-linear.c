#include "search_algos.h"
/**
 * linear_search - searches value in array of ints - Linear search algorithm
 * @array: the array.
 * @size: size.
 * @value: value.
 * Return: index.
 */
int linear_search(int *array, size_t size, int value)
{
	int index = 0;
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			index = i;
			break;
		}
	}
	if (index == 0)
		return (-1);
	return (index);
}
