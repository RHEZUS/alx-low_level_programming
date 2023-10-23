#include "lists.h"

/**
 * listint_len - returns the number of elements
 * in a linked listint_t list.
 * @h: the pointer to the first elt of the list
 * Return: the number of elts in the list
 */

size_t listint_len(const listint_t *h)
{
	int len = 0;
	const listint_t *head = h;

	while (head != NULL)
	{
		len++;
		head = head->next;
	}
	return (len);
}
