#include "main.h"

/**
 * puts_half - prints the half of a string
 * @str: the string which half will be calculated
 */


void puts_half(char *str)
{
	char *s = str;
	int i = 0, n = 0;

	while (s[i] != '\0')
		i++;
	if (i % 2 == 0)
	{
		for (n = i / 2; n <= i; n++)
			_putchar(s[n]);
	}
	else
	{
		for (n = ((i - 1) / 2 + 1); n <= i; n++)
			_putchar(s[n]);
	}

}
