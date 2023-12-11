#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: the string to be printed
 */


void _puts(char *str)
{
	char *string = str;
	int i = 0;

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}

	_putchar('\n');
}
