#include "main.h"
/**
 * _pow_recursion - function that calculate the value
 * of x raised to the power y
 * @x: integer number
 * @y: integer number
 * Return: return -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0 || x == 1)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
