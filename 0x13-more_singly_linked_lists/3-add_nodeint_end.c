#include "lists.h"
/**
 * add_nodeint_end - function that adds node at the end
 * @head: pointer to list
 * @n: data of the node
 * Return: returns the head of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_node;
	}
	return (new_node);
}
