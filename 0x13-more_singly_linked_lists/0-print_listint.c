#include "lists.h"

/***/

size_t print_listint(const listint_t *h)
{
	int elts = 0;
	const listint_t *list = h;

	while (list != NULL)
	{
		printf("%d\n", list->n);
		elts++;
		list = list->next;
	}
	return (elts);
}
