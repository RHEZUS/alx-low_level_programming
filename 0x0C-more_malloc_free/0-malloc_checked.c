#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: the size of the memory
 * Return: a pointer to the allocated memory or 98
 */


void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
