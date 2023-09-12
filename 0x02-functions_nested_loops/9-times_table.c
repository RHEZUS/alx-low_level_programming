#include "main.h"

/**
 * times_table - prints time table
 */

void times_table(void)
{
	int i, j, result = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			result = i * j;

			_putchar(',');
			_putchar(' ');

			if (result <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + '0');
			}
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
