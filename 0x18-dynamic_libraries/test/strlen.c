#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: the string which length will be foind
 * Return: the size of the string
 */
int _strlen(char *s)
{
	char *str  = s;

	int size = 0;

	while (str[size] != '\0')
	{
		size++;
	}

	return (size);
}
