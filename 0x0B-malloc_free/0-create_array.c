#include "main.h"
/**
 * create_array - function name
 * Description: function that create an array of characters and
 * initialize with a specfic character
 * @size: unsigned integer
 * @c: character
 * Return: returns a pointer to the array if success or NULL if failed
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
