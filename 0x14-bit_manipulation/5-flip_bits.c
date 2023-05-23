#include "main.h"
/**
 * flip_bits - function that returns a number of bit to be flipped
 * to have number plus one
 * @n: number of be flipped
 * @m: number to flip to
 * Return: number of times 
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int stat;

	stat = n ^ m;
	while(stat)
	{
		count = count + (stat & 1);
		stat >>= 1;
	}
	return (count);
}
