#include "lists.h"
/**
 * add_nodeint - adds the beginning of a listint_t list.
 * @head: pointer that hold the first element of the list
 * @n: integer data in the node
 * Return: the adress of the new_element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
		return (NULL);
	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (*head);
}
