#include "lists.h"

/**
 * dlistint_len - count the number of nodes in the linked list
 * @h: pointer to the beginning of a linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *head = h;

	if (h == NULL)
		return (0);

	while (head != NULL)
	{
		len++;
		head = head->next;
	}

	return (len);
}
