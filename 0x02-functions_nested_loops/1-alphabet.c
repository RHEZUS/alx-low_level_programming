#include <stdio.h>
#include <putchar.h>
/**
 * print_alphabet - prints lowercase alphabet
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar((char) i);
	}
}
/**
 * main - starting point
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
