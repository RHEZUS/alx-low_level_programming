#include "main.h"

/**
 * puts2 - prints odd numbers of a string
 * @str: the srting to be printed
 */


void puts2(char *str)
{
	char *pstr = str;
	int i = 0;

	while (pstr[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(pstr[i]);
		}

		i++;
	}

	_putchar('\n');
}
