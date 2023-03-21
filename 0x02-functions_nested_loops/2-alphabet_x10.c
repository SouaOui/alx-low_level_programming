#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char j;

	while (i <= 9)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
			_putchar('\n');
		}
		i++;
	}
	_putchar('\n');
}
