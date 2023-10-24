#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: the pointer to the first elt of the list
 * Return: the number of nodes in the list
 */


size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise = NULL;
	const listint_t *hare = NULL;
	size_t counter = 0;
	size_t new_n;

	tortoise = head;
	while (tortoise != NULL)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		counter++;
		tortoise = tortoise->next;
		hare = head;
		new_n = 0;
		while (new_n < counter)
		{
			if (tortoise == hare)
			{
				printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
				return (counter);
			}
			hare = hare->next;
			new_n++;
		}
		if (!(head))
			exit(98);
	}
	return (counter);
}
