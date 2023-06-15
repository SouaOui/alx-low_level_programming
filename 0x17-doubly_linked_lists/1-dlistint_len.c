#include "lists.h"
/**
 * dlistint_len - print the elements of the list
 * @h: pointer to the head of the list
 * Return: the number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *current;

	current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
