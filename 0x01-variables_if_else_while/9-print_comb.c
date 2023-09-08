#include <stdio.h>
/**
 * main - print possible combination of single digit number
 * Return:0
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('$');
		}
	}
	return (0);
}
