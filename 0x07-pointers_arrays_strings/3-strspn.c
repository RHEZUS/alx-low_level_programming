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
 * _strspn - gets the length of a prefix substring
 * @s: the initial segment
 * @accept: the substring
 * Return: the length of the substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		if (check_char(accept, s[i]))
		{
			n++;
		}
		else
		{
			return (n);
		}
	}
	return (n);
}
