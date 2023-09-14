#include "main.h"

/**
 * print_square - print a square
 * @size : size of square
 */

void print_square(int size);

void print_square(int size)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
			_putchar('#');
		_putchar('\n');
	}
}
