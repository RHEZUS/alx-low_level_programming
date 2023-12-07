#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *h = head;
    unsigned int n = 0;
    
    if (head == NULL)
        return (NULL);
    while (h->next != NULL && n < index)
    {
        h = h->next;
        n++;
    }
    if (h == NULL)
        return (NULL);


    return (h);
}
