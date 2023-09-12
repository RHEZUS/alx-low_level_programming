#include <stdio.h>
#include <putchar.h>

/**
 * print_alphabet_x10 - prints alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		int j;

		for (j = 97; j <= 122; j++)
		{
			_putchar((char)j);
		}
		_putchar('\n');
	}
}

/**
 * main - starting point
 * Return: 0
 */

int main(void)
{
	print_alphabet_x10();
	return (0);
}
