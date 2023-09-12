#include "main.h"

/**
 * print_times_table - prints time table
 * @n : the time table size
 */

void print_times_table(int n)
{
	int i, j, result = 0;

	if (n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 0; j <= n; j++)
			{
				printf("%s", ", ");
				result = i * j;
				if (result < 100)
					putchar (' ');
				if (result < 10)
					putchar (' ');
				printf("%d", result);
			}
			putchar('\n');
		}
	}
}
