#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: pointer to string
 * @c: character to be located
 * Return: returns the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int len = strlen(s);

	while (*s)
	{
		if (s[i] != c)
			i++;
		else
			break;
	}
	if (i <= len - 1)
	{
		return (s + i);
	}
	else
	{
	return (NULL);
	}
}
