#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - frees a 2D gird previously created.
 * @grid: the filling.
 * @height: the height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
