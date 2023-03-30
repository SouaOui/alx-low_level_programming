#include "main.h"
/**
 * string_toupper - changes lowercase letters of a string to uppercase.
 * @s: string pointer
 * Return: string in uppercase letters
 */
char *string_toupper(char *s)
{
	char *save = s;

	while (*s)
	{
		if (*s <= 'z' && *s >= 'a')
			*s = *s - 32;
		s++;
	}
	return (save);
}
