#include "function_pointers.h"
/**
 * array_iterator - function that a function given in parameter
 * on each element of the array
 * @array: array of integers
 * @size: number of element in the array
 * @action: pointer to function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL || size == 0)
		return;
	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}
