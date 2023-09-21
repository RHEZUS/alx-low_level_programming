#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: the array to reverse
 * @n: the number of characters
 */

void reverse_array(int *a, int n)
{
	int swap, i = 0, j = n - 1;

	while (i <= n / 2)
	{
		swap = a[i];
		a[i] = a[j];
		a[j] = swap;
		j--;
		i++;
	}
}
