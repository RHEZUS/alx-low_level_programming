#include "hash_tables.h"


/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the hash table
 *
 * Return: pointer to the new table, or NULL on failure
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table;

	hash_table = malloc(sizeof(shash_table_t));

	if (hash_table == NULL)
		return (0);

	hash_table->array = malloc(sizeof(shash_node_t));
	if (hash_table->array == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->shead = NULL;
	hash_table->stail = NULL;

	for (size_t i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}
	return (hash_table);
}

/**
 * shash_table_set - sets a key to a value in the hash table
 * @ht: sorted hash table
 * @key: key to the data
 * @value: data to add
 *
 * Return: 1 on success, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

}


/**
 * shash_table_get - retrieve a value from the hash table
 * @ht: hash table
 * @key: key to the data
 *
 * Return: the value associated with key, or NULL on failure
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{

}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: hash table to print
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	unsigned long int i = 0;
	int comma_needed = 0;

	if (ht == NULL || ht->array == NULL)
	{
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

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: hash table to print
 *
 * Return: void
 */

void shash_table_print_rev(const shash_table_t *ht)
{

}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: hash table to delete
 *
 * Return: void
 */

void shash_table_delete(shash_table_t *ht)
{

}

