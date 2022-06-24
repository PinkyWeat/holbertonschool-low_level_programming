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
	int i, j;
	int **array;
	array = malloc(width * height * sizeof(int));

	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
