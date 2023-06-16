#include "lists.h"
/**
 *  * delete_dnodeint_at_index - function that delete a node at a position
 *   * @head: the head of the list
 *    * @index: position of the node to be deleted
 *     * Return: 1 if Success or -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int len = 0, i;

	if (*head == NULL)
		return (-1);
	while (current->next != NULL)
	{
		len++;
		current = current->next;
	}
	if (index == 0)
	{
		(*head) = (*head)->next;
		if ((*head) != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	if (index > len)
		return (-1);
	current = *head;
	for (i = 0; i < index; i++)
		current = current->next;
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
