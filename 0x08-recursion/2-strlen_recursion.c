#include "main.h"

/**
 * _strlen_recursion - finds the length of a string using recursion
 * @s: teh string
 * Return the length of the sreing
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return 1 + _strlen_recursion (s + 1);
}
