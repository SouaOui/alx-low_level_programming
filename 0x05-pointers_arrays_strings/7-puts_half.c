#include "main.h"
/**
 * puts_half - function name
 * Description: a function that prints half of a string,
 * followed by newline
 * @str: pointer to a string
 * Return: void
 */
void puts_half(char *str)
{
	int i, j, len;

	len = strlen(str);
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		for (j = ((len - 1) / 2) + 1; j < len; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
