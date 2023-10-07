#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: the pointer to the new memory or null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrArr;
	unsigned int i;
	char *old_ptr = ptr;

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptrArr = malloc(new_size);
		return (ptrArr);
	}

	ptrArr = malloc(new_size);
	if (ptrArr == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		for (i = 0; i <= old_size; i++)
			ptrArr[i] = old_ptr[i];
	}
	free(ptr);
	return (ptrArr);

}
