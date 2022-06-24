#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returs a pointer to a 2D array of int.
 * @width: width.
 * @height: height.
 * Return: array, or NULL if 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int i, j, fr;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(width * height * sizeof(int *));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			array[i][j] = 0;
	}
	for( fr = 0; fr < i; fr++)
		free(array[i] = 0);
	return (array);
}
