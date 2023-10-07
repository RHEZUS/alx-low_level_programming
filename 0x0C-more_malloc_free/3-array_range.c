#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: the lowest number
 * @max: the maximum number
 * Return: a pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min) * sizeof(int) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
		ptr[i] = min + i;
	return (ptr);
}
