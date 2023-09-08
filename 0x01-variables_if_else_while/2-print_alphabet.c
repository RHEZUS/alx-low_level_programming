#include <stdio.h>
/**
 * main - print lowercase letters from a to z
 * Return:0
 */
int main(void)
{
	int letter = 0;
	for (letter = 97; letter <= 122; letter++)
	{
		putchar((char) letter);
	}
	putchar('\n');
	return (0);
}
