#include "main.h"

/**
 * leet - replaces some letters of words to encode a string
 * @s: the string to be encoded
 * Return: a crypted string
 */

char *leet(char *s)
{
	int i = 0, j = 0;
	char c [] = "aAeEoOtTlL";
	char cd [] = "4433007711";

	while (s[i] != '\0')
	{
		while (c != '\0')
		{
			if (s[i] == c[j])
				s[i] = cd[j];
			j++
		}
		j = 0;
		i++;
	}
	return (s);
}

