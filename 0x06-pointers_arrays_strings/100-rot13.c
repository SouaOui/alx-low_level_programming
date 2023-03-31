#include "main.h"

/**
 *rot13 - encodes strings using rot13.
 *@s: pointer to string.
 *
 *Return: pointer to encoded string.
 */

char *rot13(char *s)
{
	int i, j;
	char *rot13 = s;
	char *base1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; base1[j] != '\0'; j++)
		{
			if (s[i] == base1[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}

	return (rot13);
}
