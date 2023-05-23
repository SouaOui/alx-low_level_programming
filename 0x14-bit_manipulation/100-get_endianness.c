#include "main.h"
/**
 * get_endianness - function that check for endian
 * Return: 0 if Big endian 1 if Little Endian
 */
int get_endianness(void)
{
	char *endianne;
	int i;

	endianne = (char *)&i;
	if (*endianne)
		return (1);
	else
		return (0);
}
