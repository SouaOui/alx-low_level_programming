#include "hash_tables.h"
/**
 * hash_table_print - function that print the hash table
 * @ht: pointer to hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	int is_first_list, _first_arr;

	if (ht == NULL)
		return;
	printf("{");
	_first_arr = 1;
	for (i = 0; i < ht->size; i++)
	{
		if ((ht->array)[i] == NULL)
			continue;
		if (!_first_arr)
			printf(", ");
		current = (ht->array)[i];
		is_first_list = 1;
		while (current)
		{
			if (!is_first_list)
				printf(", ");
			printf("\'%s\': \'%s\'", current->key, current->value);
			is_first_list = 0;
			current = current->next;
		}
		current = NULL;
		_first_arr = 0;
	}
	printf("}\n");
}
