#include "hash_tables.h"

/**
 * add_node - Creates a new node
 * @ht: the hash table
 * @key: the key
 * @value: the value of the node
 * Return: the new node
 */

hash_node_t *add_node(const char *key, const char *value)
{
	hash_node_t *new_node;

    new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
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
	unsigned long int index;
	hash_node_t *current, *new_node;
    char *new_value;

	if ((ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL))
		return (0);
    index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
            new_value = strdup(value);
            if (new_value == NULL)
                return (0);
			free(current->value);
			current->value = new_value;
			return (1);
		}

		current = current->next;

	}
    new_node = add_node(key, value);
    if (new_node == NULL)
        return (0);
    new_node->next = ht->array[index];
    ht->array[index] = new_node;
    return (1);
}

