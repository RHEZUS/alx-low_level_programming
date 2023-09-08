#include <stdio.h>
/**
 * leading_zero - adds a leading zero to one digit numbers
 * Return: 0
 * @parameter: number is the number to be preceded by 0
 */

void leading_zero(int number)
{
	if (number < 10)
	{
		putchar('0');
		putchar(number + '0');
	}
	else
	{
		putchar(number / 10 + '0');
		putchar(number % 10 + '0');
	}
}
/**
 * main - prints all possible combination ow two digit numbers
 * Return: 0
 */

int main(void)
{

	int i = 0;

	for (i = 0; i < 99; i++)
	{
		int j = 0;

		for (j = i + 1; j < 100; j++)
		{
			leading_zero(i);
			putchar(' ');
			leading_zero(j);
			if (i == 98 && j == 99)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
