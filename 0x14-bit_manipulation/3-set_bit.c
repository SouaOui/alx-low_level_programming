#include "main.h"
/**
 * set_bit - function that set bit at given position
 * @n: pointer to unsigned int
 * @index: position of the bit to be set
 * Return: returns 1 if works and -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
