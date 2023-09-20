#include "main.h"

/**
 * _strlen - finds the lengh of a string
 * @str: the string which length will be found
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcat - concats two strings
 * @dest: the string to which characters will be added
 * @src: the strings fram which characters will be taken
 * Return: the concatened string
 */

char *_strcat(char *dest, char *src)
{
	int srcLen = _strlen(src);
	int destLen = _strlen(dest);
	int i = 0;

	while (i < srcLen)
	{
		dest[destLen + i] = src[i];
		i++;
	}
	return (dest);
}
