#include "main.h"
/**
 *_strncat - concatenates two strings but add inputted number of bytes
 *@dest: string to be appended upon
 *@src: string to be completed at the end of dest
 *@n : integer parameter to compare index to
 *Return: return new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *save;

	save = dest;
	while (*save)
		save++;
	while (*src && n--)
		*save++ = *src++;
	*save = '\0';
	return (dest);
}
