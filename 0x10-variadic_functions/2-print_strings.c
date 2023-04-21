#include "variadic_functions.h"
/**
 * print_strings - print strings followed by new line
 * @separator: pointer to string that separated words
 * @n: the number of the strings to be printed
 * Return: Nothing (void)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list hold;
	unsigned int i;
	char *save;

	va_start(hold, n);
	for (i = 0; i < n; i++)
	{
		save = va_arg(hold, char *);
		if (save == NULL)
			printf("(nil)");
		else
			printf("%s", save);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(hold);
}
