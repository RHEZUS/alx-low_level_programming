#include <stdio.h>
/**
 * main - print numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int i = 0;
	for (i = 0; i <= 15; i++)
	{
		if (i < 10)
		{
			putchar(i + 0);
		}
		else
		{
			putchar(i - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
