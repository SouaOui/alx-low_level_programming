#include"lists.h"
/**
 * commnets for your function goes here
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
 * allocate_node - allocate memory for node
 * @n: data of the node
 * Return: adress of the node
 */
listint_t *allocate_node(int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
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
	unsigned int i = 0, len = 0;

	new_node = allocate_node(n);
	if (*head == NULL)
	{
		*head = allocate_node(n);
		return (*head);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	len = num_node(*head);
	if (idx < len)
	{
		current = *head;
		while (i < idx - 1 && current->next != NULL)
		{
			current = current->next;
			i++;
		}
	}
	if (current != NULL)
	{
		new_node->next = current->next;
		current->next = new_node;
	}
	if (*head == NULL)
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
