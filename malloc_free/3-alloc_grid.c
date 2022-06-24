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

	/* */
	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{	
			for (; i >= 0; i--)
				free(array[i]);
			return (NULL);
		}
		free(array);
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
