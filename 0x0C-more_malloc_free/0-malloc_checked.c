#include "main.h"
/**
 * malloc_checked - function that allocate a pointer in memory
 * @b: unsigned int positive number
 * Return: returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
