#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter on each element of an array.
 * @array: the array
 * @size: the size of the array
 * @action: to be performed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
