#include "main.h"
/**
 * _puts - function name
 * Description: a function that prints a string, followed by a new line.
 * @str: pointer to string
 * Return: void
 */
void _puts(char  *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
