#include "lists.h"
/**
 * add_dnodeint - function that add a node at the beginning of a list
 * @head: the beginning of the list
 * @n: data stored in the node
 * Return: the adress of the new element if SUCCESS or NULL if Failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
