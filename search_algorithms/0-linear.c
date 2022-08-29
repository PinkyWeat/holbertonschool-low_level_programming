#include "search_algos.h"
/**
 *
 */
int linear_search(int *array, size_t size, int value)
{
	int counter = 0, index = 0;
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array[i] == value && counter < 1)
		{	
			counter++;
			index = i;
		}
		printf("Value checked array[%ld] = [%i]\n", i, array[i]);
	}
	if (index == 0)
		return (-1);
	return (i);
}
