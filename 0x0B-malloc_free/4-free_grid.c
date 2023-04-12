#include "main.h"
/**
 * free_grid - function name
 * Description: a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: pointer to pointer integer which is an array of integers
 * @height: integer value
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
