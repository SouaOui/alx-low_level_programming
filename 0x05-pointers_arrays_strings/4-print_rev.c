#include "main.h"
/**
 * print_rev - function name
 * Description: prints a string, in reverse, followed by a new line.
 * @s: a pointer to string
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
