#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: an array.
 * @size: size of array.
 * @cmp: the function.
 * Return: index or -1 for errorear

 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if ((*cmp) && array)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
	}
	return (-1);
}
