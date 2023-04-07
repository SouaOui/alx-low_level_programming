#include "main.h"
/**
 * _is_prime_test - function that test if a number is prime
 * @n: integer number
 * @i: integer number
 * Return : return 1 if a number is prime and 0 otherwise
 */
int _is_prime_test(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return(_is_prime_test(n, i + 1));
}
/**
 * is_prime_number - function that test if an input number is prime
 * @n: integer number
 * Return: return 1 if the number is prime and 0 otherwise
 */
int is_prime_number(int n)
{
	int i = 2;
	if (n <= 1)
		return (0);
	else
		return(_is_prime_test(n, i));
}
