#include "lists.h"
/**
 * num_node - function to calculate the length of the list
 * @head: pointer to first node in the list
 * Return: return the number of node and 0 if empty
 */
unsigned int num_node(listint_t *head)
{
	unsigned int len = 0;

	while (head)
	{
		len++;
		head = head->next;
	}
	return (len);
}
/**
 * get_nodeint_at_index - get the node at index (index)
 * @head: pointer to first element
 * @index: position of node in the list
 * Return: returns the node if exist and NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len, i;
	listint_t *current = head;

	len = num_node(head);
	for (i = 0; i < len && i != index; i++)
	{
		current = current->next;
	}
	if (current != NULL)
	{
		return (current);
	}
	return (NULL);
}
