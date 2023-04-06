#include "main.h"
/**
 * _puts_recursion - function that print a string foloowed by new line
 * @s: pointer to string
 * Return: void nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
