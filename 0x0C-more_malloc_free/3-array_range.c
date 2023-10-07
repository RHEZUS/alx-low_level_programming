#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: the lowest number
 * @max: the maximum number
 * Return: a pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	int *ptr, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
		ptr[i] = min + i;
	return (ptr);
}
