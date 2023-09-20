#include "main.h"

/**
 * _strcat - Concats two strings
 * @dest: The string to which characters will be added
 * @src: The strings from which characters will be taken
 * @n: The number of string to be concatened
 * Return: The concatened string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
