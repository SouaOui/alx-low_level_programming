#include "hash_tables.h"
/**
 * hash_table_delete - function that delete an item from the hash
 * @ht: pointer to hash
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *delete_item;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			delete_item = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(delete_item->key);
			free(delete_item->value);
			free(delete_item);
		}
	}
	free(ht->array);
	free(ht);
}
