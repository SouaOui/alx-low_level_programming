#include "main.h"
/**
 * _strcat - concatenates the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will append
 *@src: string that will be concatenated upon
 *
 * Return: returns pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	char *save;

	save = dest;
	while (*save)
		save++;

	while (*src)
	{
		*save = *src;
		save++;
		src++;
	}
	*save = '\0';
	return (dest);
}
