#include "variadic_functions.h"
/**
 * print_all - function that print with specifiers
 * @format: pointer to string
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list Format;
	unsigned int i = 0;
	char *str;
	char *separator = "";

	va_start(Format, format);
	if (format[i] != 0)
	{
		while (format[i])
		{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", separator, va_arg(Format, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(Format, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(Format, double));
			break;
		case 's':
			str = va_arg(Format, char*);
			if (str == NULL)
				str = "(nil)";
			else
				printf("%s%s ", separator, str);
			break;
		default:
			i++;
			continue;
		}
		separator = ", ";
		i++;
		}
	}
	printf("\n");
	va_end(Format);
}

