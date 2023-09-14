#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: always 0
 */

int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 2; i < 782848; i++)
	{
		while (n % i == 0)
			n /= i;
	}
	printf("%ld\n", n);
	return (0);
}
