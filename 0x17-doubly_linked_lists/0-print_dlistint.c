#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
    size_t n = 0;
    const dlistint_t *head = h;

    if (h == NULL)
        return (0);
        
    while (head != NULL)
    {
        printf("%d\n", head->n);
        head = head->next;
        n++;
    }
    return (n);
}