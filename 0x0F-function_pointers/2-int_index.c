#include "function_pointers.h"

/**
 * int_index -  searches for an integer.
 * @array: An array of data
 * @size: the size of the arryay
 * @cmp: a pointer to the function to be used to compare values
 * Return: -1 if fails and the index of integer otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
