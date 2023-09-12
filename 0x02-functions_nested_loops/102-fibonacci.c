#include <stdio.h>

/**
 * main - prints the fibonacci numbers
 * Return: always 0
 */

int main(void)
{
	int i, pn = 0, n = 1, c;

	for (i = 1; i <= 50; i++)
	{
		c = pn + n;
		printf("%lu", c);
		pn = n;
		n = c;
		if (i < 50)
			printf("%s", ", ");
	}
	putchar('\n');
	return (0);
}
