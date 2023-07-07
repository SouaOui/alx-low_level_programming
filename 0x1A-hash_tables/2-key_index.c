#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: pointer to the key
 * @size: the size of the array
 * Return: the index of the key in the table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size != 0)
	{
		return (hash_djb2(key));
	}
	return (0);
}
