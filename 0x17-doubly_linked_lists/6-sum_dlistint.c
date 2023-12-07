#include "lists.h"
int sum_dlistint(dlistint_t *head)
{
    dlistint_t *h = head;
    int sum = 0;

    if (head == NULL)
    {
        return (sum);
    }

    while (h != NULL)
    {
        sum += h->n;
        h = h->next;
    }
    return (sum);
}
