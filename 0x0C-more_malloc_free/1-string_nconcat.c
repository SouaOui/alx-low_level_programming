#include "main.h"
/**
 * string_nconcat - function that concateneate two strings
 * using n bytes from s2
 * @s1: pointer to string
 * @s2: pointer to string
 * @n: unsigned integer positive
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);
	result = malloc(sizeof(char) * strlen(s1) + n + 1);

	if (result == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		result[i] = s2[j];
		i++;
	}
	
	result[i] = '\0';
	return (result);
}
