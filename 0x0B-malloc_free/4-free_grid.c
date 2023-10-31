#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - free the memory of the grid
 *
 * @grid: the gri to be freed
 * @height: grid height
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
int j;
free(grid);
for (j = 0; j < height; j++)
free(grid[j]);
}
