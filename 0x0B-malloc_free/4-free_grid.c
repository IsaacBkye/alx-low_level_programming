#include "main.h"
/**
 * free_grid - Free a 2d grid
 * @grid: arg
 * @height:arg1
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i <= height; i++)
	{
		free(grid[i]);
	}
	free(grid);
	free(*grid);
}
