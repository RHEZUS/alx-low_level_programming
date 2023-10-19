#include "lists.h"

/**
 * list_len -  returns the number of elements in a linked list_t list.
 * @h: the lsit
 * Return:  returns the number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	int nelts = 0;
	const list_t *head = h;

	while (head != NULL)
	{
		nelts += 1;
		head = head->next;
	}
	return (nelts);
}
