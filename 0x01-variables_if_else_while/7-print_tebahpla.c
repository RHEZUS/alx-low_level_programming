#include <stdio.h>
/**
 * main - prnts lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	for (int i = (char)122; i >= (char)97; i--)
	{
		putchar(i);
	}
	return (0);
}
