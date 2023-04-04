#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * Description: calculate the number of bytes in the initial segement
 * @s: pointer to string
 * @accept: pointer to string
 * Return: unsigned integrer length of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					count++;
			}
		}
		else
		{
			return (count);
		}
	}
	return (count);
}
