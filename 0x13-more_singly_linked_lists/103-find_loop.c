#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: the pointer to the first elt of the list
 * Return: The address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *hare = head;

	if (head == NULL && head->next == NULL)
		return (NULL);

	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
			break;
	}

	if (hare == NULL || hare->next == NULL)
		return (NULL);

	tortoise = head;

	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next;
	}

	return (tortoise);
}
