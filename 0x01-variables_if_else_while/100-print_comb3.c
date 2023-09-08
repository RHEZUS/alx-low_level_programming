#include <stdio.h>
/**
 * main - return all combination of two digitsnumbers
 * Return: 0
 */
int main(void)
{
	int i = 0;
	for (i = 0; i < 9; i++)
	{
		int j = 0;
		for (j = i + 1; j <= 9; j++)
		{
			if (i == 8 && j == 9)
			{
				putchar(i + '0');
				putchar(j + '0');
			}
			else
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
