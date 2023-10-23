#include "lists.h"

/***/

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;

	while (head != 0)
	{
		printf("[%p] %d\n", &head, head->n);
		head = head->next;
		i++;
	}
	return (i);
}
