#include "hash_tables.h"
/**
 * hash_table_get - function retrieve a value associated with the key
 * Description: get the value of key
 * @ht: pointer to the hash table
 * @key: key to be searched for in the hash table
 * Return: the value associated with key NULL if key NOT Found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int i = 0;
	char *value_key = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	while (i < ht->size)
	{
		current = ht->array[i];
		while (current)
		{
			if (strcmp(current->key, key) == 0)
			{
				value_key = strdup(current->value);
				return (value_key);
			}
			current = current->next;
		}
		i++;
	}
	return (NULL);
}
