#include "lists.h"

/**
* free_listint2 - free listint_t
* @head: first element in listint_t
*/

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			current = (*head);
			*head = (*head)->next;
			free(current);
		}
		*head = NULL;
	}
}
