#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 97; j <= 122; j++)
		{
			_putchar((char)j);
		}
		_putchar('\n');
	}
}
