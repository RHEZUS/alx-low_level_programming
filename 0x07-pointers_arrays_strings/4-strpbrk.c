#include "main.h"



/**
 * check_char - checks id a string has a character
 * @c:charcter
 * @s:string
 * Return: 1 if yes and 0 if no
 */

int check_char (char *s, char c)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (1);
	}

	return (0);
}


/**
 * strspn - gets the first character matching one of the characters in a string
 * @s: the initial segment
 * @accept: the substring
 * Return: the first matching character if found and null if not
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	for (i = 0; s[i] != ' '; i++)
	{
		if (check_char(accept, s[i]))
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
