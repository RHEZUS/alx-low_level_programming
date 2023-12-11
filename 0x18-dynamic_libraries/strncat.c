#include "main.h"

/**
 * _strncat - Concats two strings
 * @dest: The string to which characters will be added
 * @src: The strings from which characters will be taken
 * @n: The number of string to be concatened
 * Return: The concatened string
 */

char *_strncat(char *dest, char *src, int n)
{
	int l = _strlen(dest);
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[l] = src[i];
		i++;
		l++;
	}
	dest[l] = '\0';
	return (dest);
}
