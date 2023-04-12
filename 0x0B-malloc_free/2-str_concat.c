#include "main.h"
/**
 * _strlen - function name
 * Description: calculate the length of a string
 * @s: pointer to string
 * Return: integer length of the string
 */
unsigned int _strlen(char *s)
{
unsigned int len = 0;

while (*s)
{
	len++;
	s++;
}
return (len);
}
/**
 * _strcpy - copy the string pointed to by src to dest
 * Description: copy a string pointed by a pointer to another string
 * @src: pointer to string
 * @dest: pointer to string
 * Return:the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count;

	for (count = 0; src[count] != '\0'; count++)
		dest[count] = src[count];
	dest[count] = '\0';
	return (dest);
}
/**
 * str_concat - function name
 * Description: concatenate two strings
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int i, j;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	result = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		result[i] = s1[i];
	for (j = 0; s2[j]; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
