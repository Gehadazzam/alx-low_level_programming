#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - returns a pointer to a 2 dimensional array of integers
*
*@width: first array
*
*@height: seconed array
*
*Return: (pointer or NULL)
*/
int **alloc_grid(int width, int height)
{
int i, j, **grid;
	if (width <= 0 || height <= 0)
		return (NULL);
grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
{
		grid[i] = malloc(width * sizeof(int));
	if (grid[i] == NULL)
{
		for (j = 0; j < i; j++)
			free(grid[j]);
		free(grid);
		return (NULL);
}
}
	for (i = 0; i < height; i++)
{
	for (j = 0; j < width; j++)
		grid[i][j] = 0;
}
	return (grid);
}
