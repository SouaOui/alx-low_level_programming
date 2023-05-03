#include"lists.h"
/**
 * num_node - function to calculate the length of the list
 * @head: pointer to first node in the list
 * Return: return the number of node and 0 if empty
 */
unsigned int num_node(listint_t *head)
{
	unsigned int len = 0;

	while (head)
	{
		len++;
		head = head->next;
	}
	return (len);
}
/**
 * insert_nodeint_at_index - insert a node at position
 * @head: pointer to head of the list
 * @idx: position
 * @n:data of the node
 * Return: Adress of the node if succes and NULL failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int number_node;

	number_node = num_node(*head);

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx > number_node)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL && idx == 0)
	{
		*head = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	else
	{
		current = *head;
		while (--idx)
			current = current->next;
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = current->next;
		current->next = new_node;
		return (new_node);
	}
}
