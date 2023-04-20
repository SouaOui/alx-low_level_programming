#include "function_pointers.h"
/**
 * f - function name
 * @name: pointer to string
 * Return: Nothing
 */
void f(char *name)
{
	printf("%s", name);
}
/**
 * print_name - function that prints a name
 * @name: pointer to string name to be printed
 * @f: function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
