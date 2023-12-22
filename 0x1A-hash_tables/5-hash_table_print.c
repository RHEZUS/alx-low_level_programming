#include "hash_tables.h"

/**
 * hash_table_print - prints the content of a hash table
 * @ht: the hash table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i = 0;
	int comma_needed = 0;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
	{
		printf("{}");
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (comma_needed)
				printf(", ");

			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			comma_needed = (current != NULL || i < ht->size - 1);
		}
	}
	printf("}\n");
}

