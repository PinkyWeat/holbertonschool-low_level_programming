#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2D gird previously created.
 * @grid: the filling.
 * @height: the height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = height; i >= 0; i++)
	{
		free(array[i]);
	}
	free(array);
}
