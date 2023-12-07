#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: double pointer to the linked list
 * @index: index at which to delete node
 *
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);

	return (1);
}
