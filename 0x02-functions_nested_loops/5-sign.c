#include "main.h"
/**
 * print_sign - function to print signs
 * @n: the character to check
 * Return: 1 and print + if n is greater than zero. 0 equal. -1 less
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
