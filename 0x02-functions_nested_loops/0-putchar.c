#include "main.h"
#include<string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	_putchar();
	return (0);
}

void _putchar(void)
{
	char ch[20] = "_putchar";
	int l;
	int i = 0;

	l = strlen(ch);
	while (i <= l)
	{
		putchar(ch[i]);
		i++;
	}
	putchar('\n');
}
