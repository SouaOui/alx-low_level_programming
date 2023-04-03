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
	unsigned int x = 0;
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				x++;
			}
			else
			{
				s++;
				i++;
			}
		}
	}
	if (x == 0 || x == 1)
	{
		return (strlen(accept) + 1);
	}
	else
		return (x);
}
