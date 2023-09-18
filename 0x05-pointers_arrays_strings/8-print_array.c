#include "main.h"

/**
 * print_array - prints n element of an integer array
 * @a: the array
 * @n: the number od elements to be printed
 */

void print_array(int *a, int n);
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
