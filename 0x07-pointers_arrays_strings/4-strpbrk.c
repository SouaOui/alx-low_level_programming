#include "main.h"
/**
 * _strpbrk - function that searches a string for any set of bytes
 * Description:  function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: pointer to first string
 * @accept:pointer to string
 * Return:a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	i++;
	}
	return (NULL);
}
