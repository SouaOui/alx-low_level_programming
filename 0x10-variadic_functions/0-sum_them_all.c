#include "variadic_functions.h"
/**
 * sum_them_all - variadic function that sum n numbers
 * @n: number of arguments
 * Return: returns the sum if SUCCESS and 0 otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list Ptr_n;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);
	va_start(Ptr_n, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(Ptr_n, int);
	}
	va_end(Ptr_n);
	return (sum);
}
