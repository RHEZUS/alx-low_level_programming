#include "lists.h"

/***/

size_t list_len(const list_t *h)
{
	int nelts = 0;
	const list_t *head = h;

	while (head != NULL)
	{
		nelts += 1;
		head = head->next;
	}
	return(nelts);
}
