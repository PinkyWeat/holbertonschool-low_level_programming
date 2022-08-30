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
	int index;
	size_t i = 0, siz_e = 0;

	if (!array || size == 0)
		return (-1);
	size = size - 1;
	while (i <= siz_e)
	{
		printMe(array, i, size);
		index = (size - i) / 2 + 1;
		if (array[index] == value)
			return (index);
		else if (array[index] < value)
			i = index + 1;
		else
			size = index - 1;
	}
	return (-1);
}
/**
 *
 */
void printMe(int *array, size_t i, size_t size)
{
	printf("Searching in array: ");
	for (; i <= size; i++)
	{
		printf("%d", array[i]);
		if (i < size)
			printf(", ");
	}
	putchar(10);
}
