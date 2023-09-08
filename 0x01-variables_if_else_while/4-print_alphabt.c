#include <stdio.h>
/**
 * main - print lowercase letters from a to z but e and q
 * Return:0
 */
int main(void)
{
	for (int letter = 97; letter <= 122; letter++)
	{
		if ((letter == 101) || (letter == 113))
			letter++;
		putchar((char) letter);
	}
	return (0);
}

