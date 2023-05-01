#include "lists.h"
/**
 * pop_listint - delete head node of the list
 * @head: pointer to the first node
 * Return: return an integer data of the node integer and 0 if empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *ptr;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	ptr = *head;
	(*head) = (*head)->next;
	free(ptr);
	return (data);
}
