#include "main.h"

/**
 * _strchr -  locates a character in a string.
 * @s: the string where will be located
 * @c: the character to be located
 * Return: the pointer to the first occurence of character
 */


char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
