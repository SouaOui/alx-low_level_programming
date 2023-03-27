#include "main.h"
/**
 * print_array - function name
 * Description: a function that print n elements of an array of integers,
 * separated by comma followed by new line
 * @a: pointer to integer array
 * @n: integer the number of elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
