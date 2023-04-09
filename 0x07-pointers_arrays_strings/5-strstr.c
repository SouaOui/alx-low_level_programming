#include "main.h"
/**
 * _strstr - function that finds the first occurrence
 * of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * @haystack: pointer to string
 * @needle: pointer to string
 * Return: return a pointer to the beginning of the located substring or
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
				return (needle);
		}
	i++;
	}
	return (NULL);
}

