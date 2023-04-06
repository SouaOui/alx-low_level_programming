#include "main.h"
/**
 * factorial - function that calculate the factoriel of an integer positive
 * @n: integer number
 * Return: -1 if n is less than 0
 */
int  factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
