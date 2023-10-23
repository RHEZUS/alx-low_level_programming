#include "lists.h"

/***/

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
