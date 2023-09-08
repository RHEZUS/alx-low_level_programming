#include <stdio.h>
/**
 * main - all three digit numbers combination
 * Return: 0
 */
int main(void)
{
	for (int i = 0; i <= 7; i++)
	{
		for (int j = i + 1; j <= 8; j++)
		{
			for (int k = j + 1; k <= 9; k++)
			{
				if (i == 7 && j == 8 && k == 9)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
				}
				else
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
