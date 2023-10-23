#include "lists.h"

/***/

int pop_listint(listint_t **head)
{
	listint_t *next_node = NULL;
	int data = 0;

	if (*head == NULL)
		return (0);
	next_node = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = next_node;

	return (data);
}
