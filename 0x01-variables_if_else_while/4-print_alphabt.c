#include <stdio.h>
/**
 * main - print lowercase letters from a to z
 * Return:0
 */
int main(void)
{
	for (int letter = 97; letter <= 122; letter++)
	{
		if((letter == 101) && (letter == 114)){
			letter++;
		}

		putchar((char) letter);
	}
	putchar('\n');
	return (0);
}

