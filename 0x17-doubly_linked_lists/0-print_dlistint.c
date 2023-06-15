#include "lists.h"
/**
 * print_dlistint - print the elements of the list
 * @h: pointer to the head of the list
 * Return: the number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *current;

	current = h;

	while(current != NULL)
	{
		len ++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (len);
}
