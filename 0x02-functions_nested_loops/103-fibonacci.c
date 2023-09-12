#include <stdio.h>

/**
 * main - prints the fibonacci numbers
 * Return: always 0
 */

int main(void)
{
	int pn = 0, n = 1, c = 0, sum = 0;

	while (c < 4000000)
	{
		c = pn + n;
		if ((c % 2) == 0)
			sum += c;
		pn = n;
		n = c;
	}
	printf("%d\n", sum);
	return (0);
}
