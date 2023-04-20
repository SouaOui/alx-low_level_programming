#include "function_pointers.h"
/**
 * int_index - function that searchs in ann array
 * @array: array of integers
 * @size: the number of elements in an array
 * @cmp: a pointer ot function
 * Return: the index of the first element
 * returns 0 if no element matches
 * returns -1 if the size is <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
