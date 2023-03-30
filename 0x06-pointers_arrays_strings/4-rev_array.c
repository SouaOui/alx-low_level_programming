#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: pointer to integer to the first element of the array
 * @n: number integer dimension on the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int save;

	for (i = 0; i < (n / 2); i++)
	{
		save = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = *(a + i);
	}
}
