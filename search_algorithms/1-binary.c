#include "search_algos.h"
/**
 * binary_search - searches value in srt array of ints using - Binary Alg.
 * @array: the array.
 * @size: size of array.
 * @value: value we're looking for.
 * Return: index where value's located.
 */
int binary_search(int *array, size_t size, int value)
{
	int index = 0;
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (i == 0)
			printf("Searching in array: %ld,", i);
		printf(" %ld,", i);
		if (array[i] == value)
			index = i;
	}
	putchar(10);
	if (index == 0)
		return (-1);
	return (index);
}
