#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: pointer to the the first element of the node
 * @index: the position of the node
 * Return: the nth node at position index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0, len = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (NULL)
	while (head != NULL)
	{
		len++;
		head =  head->next;
	}
	print("the length is %u\n", len);
	if (index > len || index < 0)
		return (NULL);
	if (index == 0)
		return (head);
	for (i = 0; i < index; i++)
		current = current->next;
	return (current);
}
