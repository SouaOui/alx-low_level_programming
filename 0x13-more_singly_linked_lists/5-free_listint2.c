#include "lists.h"
/**
 * free_listint2 - function that free a list
 * @head: pointer to first element
 * Return : Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *save;

	if (*head != NULL)
	{
		while (*head != NULL)
		{
			save = *head;
			(*head) = (*head)->next;
			free(save);
		}
		*head = NULL;
	}
}
