#include "hash_tables.h"

/**
 * add_node - Creates a new node
 * @ht: the hash table
 * @key: the key
 * @value: the value of the node
 * Return: the new node
 */

int add_node(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
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
	unsigned long int index =
	key_index((const unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[index];

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return ((current->value != NULL) ? 1 : 0);
		}

		current = current->next;

	}

	return (add_node(ht, key, value));
}

