#include "main.h"
/**
 * _strlen - name function
 * Description: a function that returns the length of a string.
 * @s: pointer to character
 * Return: pointer int
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
