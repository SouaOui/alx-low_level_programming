#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that calculate the lenght of a list
 * @h: pointer to list_t
 * Return: the number of element
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
