#include "lists.h"
/**
 * free_listint - function that free list
 * @head: pointer to the first element
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *save = head;

	while (save != NULL)
	{
		head = head->next;
		free(save);
		save = head;
	}
}
