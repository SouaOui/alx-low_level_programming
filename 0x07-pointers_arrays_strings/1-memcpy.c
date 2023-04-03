#include "main.h"
/**
 * _memcpy - function that copy one memory area
 * @dest: the pointer to dest string
 * @src: pointer to source string
 * * @n: unsigned integer
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
