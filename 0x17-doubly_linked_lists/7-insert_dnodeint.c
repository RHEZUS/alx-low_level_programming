#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the beginning of the linked list
 * @idx: index at which to insert the new node
 * @n: data to enter into new node
 *
 * Return: pointer to the new node, or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head = *h, *new_node = malloc(sizeof(dlistint_t));
	unsigned int c = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (head != NULL && c < idx - 1)
	{
		head = head->next;
		c++;
	}

	if (head == NULL)
	{
		free(new_node);
		return (NULL);
	}


	new_node->next = head->next;
	new_node->prev = head;

	if (head->next == NULL)
		head->next->prev = NULL;
	head->next = new_node;

	return (new_node);
}
