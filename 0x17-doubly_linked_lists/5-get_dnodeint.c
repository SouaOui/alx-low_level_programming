#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: pointer to the the first element of the node
 * @index: the position of the node
 * Return: the nth node at position index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx;

	for (idx = 0; head && idx < index; idx++)
		head = head->next;
	return (head);
}
