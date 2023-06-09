#include "main.h"
/**
 * array_range - function that create an array of integers
 * @min: integer
 * @max: integer
 * Return: a pointer if Success and NULL if Failed
 */
int *array_range(int min, int max)
{
	int i = 0, *table;

	if (min > max)
		return (NULL);
	table = malloc((max - min + 1) * sizeof(int));

	if (table == NULL)
		return (NULL);
	while (i <= (max - min))
	{
		table[i] = min + i;
		i++;
	}
	return (table);
}
