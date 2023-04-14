#include "main.h"
/**
 * _calloc - function that allocate memory for an array
 * @nmemb: integer positive
 * @size: integer positive
 * Return: returns pointer if Success or NULL otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *array1;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);
	array1 = array;
	for (i = 0; i < (nmemb * size); i++)
		array1[i] = '\0';
	return (array);
}
