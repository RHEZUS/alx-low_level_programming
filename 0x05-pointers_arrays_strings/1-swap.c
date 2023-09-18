#include "main.h"

/**
 * swap_int - swaps the value of two variables
 * @a: the first variable
 * @b: the second variable
 */
void swap_int(int *a, int *b)
{
	int *nbr1 = a;
	int *nbr2 = b;
	int swap;

	swap = *nbr1;
	*nbr1 = *nbr2;
	*nbr2 = swap;
}
