#include "main.h"
/**
 * clear_bit - function to clear the bit at given position
 * @n: pointer to unsigned int
 * @index: position to clear the bit at
 * Return: 1 if worked and -1 if error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
