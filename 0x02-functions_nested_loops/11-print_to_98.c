#include "main.h"

/**
 * print_to_98 - print all the numbers up to 98
 * @n: the numbe to start from
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n < 98)
			{
				printf("%d, ", n);
			}
			else
				printf("%d\n", n);
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n > 98)
			{
				printf("%d, ", n);
			}
			else
				printf("%d\n", n);
			n--;
		}
	}
}
