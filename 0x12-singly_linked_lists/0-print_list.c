#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the list which elements are printed
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *head = h;

	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", head->len, head->str);
		i++;
		head = head->next;

	}
	return (i);
}
