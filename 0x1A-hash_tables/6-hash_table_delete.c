#include "hash_tables.h"

/**
 * hash_table_delete - Frees a hash table
 * @ht: the hash table
 * Return: nothing
 */
 
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	hash_node_t *next_node;
	unsigned long int i = 0;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			next_node = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next_node;
		}
	}
    free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);

}

