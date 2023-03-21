#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		print_alphabet();
		i++;
	}
	_putchar('\n');
}
