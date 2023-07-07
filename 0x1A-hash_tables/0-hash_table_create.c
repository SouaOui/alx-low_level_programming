#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * Description: functin that initialize the state of the hash table
 * @size:the size of the array
 * Return:pointer to newly created hash table (Success) NULL (Failure)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		(table->array)[i] = NULL;
	return (table);
}
