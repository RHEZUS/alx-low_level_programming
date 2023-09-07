#include <stdio.h>

/**
 * main - print message with new line to std error
 * Return: error
 */

int main(void)
{
	write(STDERR_FILENO,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
