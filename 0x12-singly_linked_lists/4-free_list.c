#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that destroy a list
 * @head: pointer to first element of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *save = head;

	while (save != NULL)
	{
		head = head->next;
		free(save->str);
		free(save);
		save = head;
	}
}
