#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    unsigned int i;

    if (*head == NULL)
        return (-1);
    
    if (index == 0)
    {
        *head = current->next;
        if (current->next != NULL)
            (*head)->prev = NULL;
        free(current);
        return (1);
    }

    while (current != NULL && i < index - 1)
    {
        current = current->next;
        i++;
    }

    if (current == NULL)
    {
        return (-1);
    }

    if (current->prev != NULL)
        current->next->prev = current->prev;
    if (current->next != NULL)
        current->prev->next = current->next;

    free(current);

    return (1);
}
