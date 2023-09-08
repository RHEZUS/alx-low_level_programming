#include <stdio.h>
/**
 * main - return all combination of two digitsnumbers
 * Return: 0
 */
int main(void)
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j <= 9; j++)
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
	return (0);
}
