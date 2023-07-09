#include "hash_tables.h"
/**
 * hash_table_delete - function that delete an item from the hash
 * @ht: pointer to hash
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i = 0;
    hash_node_t *delete_item, *current;

    for (i = 0; i < ht->size; i++)
    {
        current = ht->array[i];
        while(current)
        {
            delete_item = current->next;
            free(current->key);
            free(current->value);
            free(current);
            current = delete_item;
        }
    }
    free(ht->array);
    free(ht);
}