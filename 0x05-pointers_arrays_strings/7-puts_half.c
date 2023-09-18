#include "main.h"

/**
 * puts_half - prints the half of a string
 * @str: the string which half will be calculated
 */


void puts_half(char *str)
{
	int n = 0;

	while (str[n] != '\0')
		n++;
	for (n /= 2; str[n] != '\0'; n++)
		_putchar(str[n]);
	
	_putchar('\n');
}
