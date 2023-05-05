#include "main.h"
/*
 * print_binary - function that print the binary representation
 * of a number passed in parameter
 * @n: number to be printed in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	if (n > 1)
		print_binary(n >> 1);
	_putchar ('0' + (n & 1));
}
