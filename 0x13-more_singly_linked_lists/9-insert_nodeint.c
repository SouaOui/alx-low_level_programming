#include"lists.h"
/**
 * insert_nodeint_at_index - insert a node at position
 * @head: pointer to head of the list
 * @idx: position
 * @n:data of the node
 * Return: Adress of the node if succes and NULL failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	while (i < idx)
	{
		current = current->next;
		i++;
	}
	if (current != NULL)
	{
		new_node->next = current->next;
		current->next = new_node;
	}
	return (new_node);
}
