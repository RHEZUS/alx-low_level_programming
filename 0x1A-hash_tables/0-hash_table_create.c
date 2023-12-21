#include "hash_tables.h"

/**
 * hash_table_create - creates a hash-table
 * @size: the size of the table
 * Return: the newly created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (!hash_table)
		return (NULL);
	hash_table->size = size;
	hash_table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (!hash_table->array)
		return (NULL);
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	return (hash_table);
}
