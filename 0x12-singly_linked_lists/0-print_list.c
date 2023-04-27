#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that print all the element of a list
 * @h: pointer ot the list_t
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t r = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		r++;
	}
	return (r);
}
