#include <stdio.h>

/**
 * main - prints the fibonacci numbers
 * Return: always 0
 */

int main(void)
{
	int i, pn = 0, n = 1, c;

	for (i = 1; i <= 98; i++)
	{
		c = pn + n;
		printf("%d", c);
		pn = n;
		n = c;
		if (i < 98)
			printf("%s", ", ");
	}
	return (0);
}
