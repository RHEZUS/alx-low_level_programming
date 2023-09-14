#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: always 0
 */

int main(void)
{
	unsigned long i = 2, G_factor = 0, n = 612852475143;

	while (++i < n / 2)
	{
		if (n % i == 0)
		{
			G_factor = i;
			while (n % i == 0)
				n /= i;
		}
	}
	printf("%ld\n", G_factor);
	return (0);
}
