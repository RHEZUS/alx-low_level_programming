#ifndef __HEADER__
#define __HEARDER__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list
{
	char *str;
	int len;
	struct list *next;
}list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
