#include "lists.h"
/**
 * insert_dnodeint_at_index - function that add a node at a given position
 * @h: head of the list
 * @idx: position to insert at
 * @n: data of the node to be inserted
 * Return: returns the adress of the new node if Success or NULL if Failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp = *h;
	unsigned int len = 0, i;

	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || idx > len)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (idx == len)
		return (add_dnodeint_end(h, n));
	tmp = *h;
	for (i = 0; i < idx; i++)
		tmp = tmp->next;
	new_node->n = n;
	new_node->next = tmp;
	new_node->prev = tmp->prev;
	tmp->prev->next = new_node;
	tmp->prev = new_node;
	return (new_node);
}
