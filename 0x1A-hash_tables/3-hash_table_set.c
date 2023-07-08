#include "hash_tables.h"
/**
 * hash_table_set - function that add an element to hash table
 * @ht: hash table
 * @key: key to add
 * @value: value to be paired with the key
 * Return: 1 Success and 0 Failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (1);
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
