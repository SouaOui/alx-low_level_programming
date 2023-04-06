#include "main.h"
/**
 * _sqrt - function that natural square root of a number
 * @n: integer number
 * @i: ineger number
 * Return: return the square root of the number if valid
 * -1 otherwise
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - fucntion that calculate the natural
 * number root of a number positive integer
 * @n: integer number
 * Return: return -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (_sqrt(n, 0));
}
