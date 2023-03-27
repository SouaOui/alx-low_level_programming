#include "main.h"
/**
 * rev_string - function name
 * Description: a function that reverse a string
 * @s: pointer to string
 * Return: void
 */
void rev_string(char *s)
{
	int len;
	int i;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
