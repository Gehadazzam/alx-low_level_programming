#include "main.h"
#include <stdlib.h>
/**
*free_grid - frees a 2 dimensional grid previously created
*
*@grid: pointer to the array
*
*@height: rows of the integer
*
*Return: (void)
*/
void free_grid(int **grid, int height)
{
int i;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
