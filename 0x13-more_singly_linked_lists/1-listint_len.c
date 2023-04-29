#include "lists.h"
/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list.
 * @h: pointer to head of the list
 * Return: the Length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
