#include "main.h"

/**
 * _strchr -  locates a character in a string.
 * @s: the string where will be located
 * @c: the character to be located
 * Return: the pointer to the first occurence of character
 */
/*
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (c == '\0')
		return (s);
	return (NULL);
}*/

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
