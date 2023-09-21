#include "main.h"

/**
 * isSpecialChar - checks if a character is a word seperator
 * @c: the charactre to be checked
 * Return: 0 if the character is not e seperator and 1 otherwise
 */
int isSpecialChar(char c)
{
	switch (c)
	{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '\"':
		case '(':
		case ')':
		case '{':
		case '}':
			return (1);
		default:
			return (0);
	}
}

/**
 * cap_string - capitalises the first letters of every word in a string
 * @s: the string to be ccapitalised
 * Return: the capitalised string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		if (isSpecialChar(s[i]))
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - ('a' - 'A');
			}
		}
		i++;
	}
	return (s);
}

