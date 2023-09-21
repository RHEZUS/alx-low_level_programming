#include "main.h"


/**
 * rot13 - encodes a string with ROT13 format
 * @s: the string to be encoded
 * Return: an incoded string
 */


char *rot13(char *s)
{
	int i = 0;
	char base;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			base = (s[i] >= 'a' && s[i] <= 'z') ? 'a' : 'A';
			s[i] = (s[i] - base + 13) % 26 + base;
		}
		i++;
	}
	return (s);
}
