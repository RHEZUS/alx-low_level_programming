#include "lists.h"

/***/

size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *head = h;

	while(head != NULL)
	{
		if (head->str == NULL)
		{
			printf("[0] (nil)\n");
			i++;
		}
		else
		{
			printf("[%d] %s\n", head->len, head->str);
			i++;
		}
		head = head->next;
	}
	return (i);
}
