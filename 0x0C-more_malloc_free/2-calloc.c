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

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);
	return (array);
}
