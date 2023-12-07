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
	dlistint_t *head = *h, *new_node = NULL;
	unsigned int i = 1;

	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node == NULL)
						return (NULL);
					new_node->n = n;
					new_node->next = head->next;
					new_node->prev = head;
					head->next->prev = new_node;
					head->next = new_node;
				}
				break;
			}
			head = head->next;
			i++;
		}

	}
	return (new_node);
}
