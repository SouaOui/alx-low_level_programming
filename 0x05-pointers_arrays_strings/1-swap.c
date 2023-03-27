#include "main.h"
/**
 * swap_int - swap two integers
 * Description: a function that swaps the values of two integers.
 * @a: integer pointer
 * @b: integer pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
