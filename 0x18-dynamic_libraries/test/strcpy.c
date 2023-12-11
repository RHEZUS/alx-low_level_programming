#include "main.h"

/**
 * _strcpy - copies string data from a pointer to another
 * @dest: the pointer to where the data will be copied
 * @src: the data from where the string will bw copied
 * Return: the dest pointer
 */

char *_strcpy(char *dest, char *src);
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
