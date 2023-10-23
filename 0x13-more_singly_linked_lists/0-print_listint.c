#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: the poinnter to the first elt of the list
 * Return: the number of elts of the list
 */

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
