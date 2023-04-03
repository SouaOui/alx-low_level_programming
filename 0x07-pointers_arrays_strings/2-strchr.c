#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: pointer to string
 * @c: character to be located
 * Return: returns the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return (s);
}
