#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of the nodes
 * @head: pointer to the first node in the list
 * Return: sum of data in node
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
