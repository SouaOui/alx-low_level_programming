#include "main.h"
/**
 * alloc_grid - function name
 * Description: function that allocate a memory for two dimensional
 * array of integers
 * @width: integer
 * @height: integer
 * Return: returns NULL on failure or if width or height is 0 return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j, **table;

	if (width <= 0 || height <= 0)
		return (NULL);

	table = (int **)malloc(sizeof(int *) * height);
	if (table == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		table[i] = (int *)malloc(sizeof(int) * width);
		if (table[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(table[i]);
			}
			free(table);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			table[i][j] = 0;
		}
	}
	return (table);
}
