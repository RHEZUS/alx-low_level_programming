#include "lists.h"

/***/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *tmp;
	unsigned int i = 0;

	if (new_node == NULL || (*head) == NULL)
		return (NULL);

	if (idx != 0)
	{
		tmp  = *head;

		for (i = 0; i < idx - 1 && *head != NULL; i++)
		{
			tmp = tmp->next;
		}

		if (tmp == NULL)
			return (NULL);
	}

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
