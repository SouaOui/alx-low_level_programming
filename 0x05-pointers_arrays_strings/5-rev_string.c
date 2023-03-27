#include "main.h"
/**
 * rev_string - function name
 * Description: a function that reverse a string
 * @s: pointer to string
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, len;
	char temp;

	len = 0;

	while (s[len])
		len++;

	j = len - 1;

	for (i = 0; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
