#include "hash_tables.h"

/**
 * create_node - Creates a new node
 * @key: the key
 * @value: the value of the node
 * Return: the new node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (NULL);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}

/**
 * hash_table_set - adds nodes to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value of the node
 * Return: 0 or 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;
	hash_node_t *current_index;

	if (!key || strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_index = ht->array[index];

	if (current_index != NULL)
	{
		if (strcmp(current_index->key, key) == 0)
		{
			ht->array[index]->value = strdup(value);
		}
		else
		{
			new_node = create_node(key, value);
			if (!new_node)
				return (0);
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
			/*return(1);*/
		}

	}
	else
	{
		new_node = create_node(key, value);
		if (!new_node)
			return (0);
		ht->array[index] = new_node;
		/*return (1);*/
	}

	return (1);
}

