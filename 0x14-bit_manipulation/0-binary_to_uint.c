#include "main.h"
/**
 * binary_to_uint -  converts a binary number to unsigned int
 * @b: pointer to const char
 * Return: returns the converted number or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, val = 1;
	int len = 0, i;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			if (b[i] == '1')
			{
				number += val;
			}
			val *= 2;
		}
		else
			return (0);
	}
	return (number);
}
