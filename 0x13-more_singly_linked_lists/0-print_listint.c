#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to first element in the list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_node = 0;
	const listint_t *current = h;

	if (h == NULL)
		num_node = 0;
	else
	{
		while (current != NULL)
		{
			printf("%d\n", current->n);
			current = current->next;
			num_node++;
		}
	}
	return (num_node);
}
