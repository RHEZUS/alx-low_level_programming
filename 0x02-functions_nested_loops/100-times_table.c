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
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if ((result < 10))
					printf("   %d", result);
				else if ((result < 100))
					printf("  %d", result);
				else
					printf(" %d", result);
				if (j < n)
					putchar(',');
			}
			putchar('\n');
		}
	}
}
