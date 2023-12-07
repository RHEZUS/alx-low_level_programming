#include "lists.h"

/**
 * get_dnodeint_at_index - finds a specific node of a linked list
 * @head: pointer to the beginning of the list
 * @index: index of the node to retrieve
 *
 * Return: pointer to the indexed node, or NULL on failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h = head;
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	while (h->next != NULL && n < index)
	{
		h = h->next;
		n++;
	}
	if (h == NULL)
		return (NULL);

	return (h);
}
