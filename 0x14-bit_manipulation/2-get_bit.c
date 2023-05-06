#include"main.h"
/**
 * get_bit - obtain the value of bit at index
 * @n: number
 * @index: position of bit
 * Return: the value of the  bit at the given position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_status;

	bit_status = (n >> index) & 1;

	return (bit_status);
}
