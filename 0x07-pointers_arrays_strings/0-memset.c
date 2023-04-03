#include "main.h"
/**
 * _memset - function that fill a memory with constant byte
 * @s: pointer to string
 * @b: constant character
 * @n: unsigned integer the first n number of bytes
 * Return: pointer to the memory area pointed by s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	
	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
