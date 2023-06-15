#include "lists.h"
/**
 * add_dnodeint_end - function that add the node at the end of the list
 * @head: pointer to the the first of the list
 * @n: data inside the node
 * Return: returns the adress of the node if Success and NULL otherwise
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
	new_node->n = n;
	if ((*head) == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		(*head) = new_node;
		return (new_node);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
	new_node->prev = current;
	return (new_node);
}
