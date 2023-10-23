#include "lists.h"

/***/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i<= index - 1; i++)
	{
		if (i < index && head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
