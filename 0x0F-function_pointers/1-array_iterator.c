#include "function_pointers.h"
/**
 * action - function that add one to each integer
 * @x: integer value
 * Return: Nothing
 */
void action(int x)
{
	printf("%d\n", x + 1);
}
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

	if (size == 0)
		return;
	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}
