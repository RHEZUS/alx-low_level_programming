#include "main.h"

/**
 * str_len - finds the length of a string
 * @s: the string
 * Return: the length of a string and 0 if it is empty
 */
int str_len (char *s)
{
	if (*s != '\0')
		return (1 + str_len(s + 1));
	return (0);
}

/**
 * checks if a string is palyndrom
 * @start: the first index of the string
 * @last: the last index of the string
 * @s: the string
 * Return: 1 if it is a palyndrom an 0 otherwise
 */

int check_pal(int start, int end, char *s)
{
	if (s[start] == s[end])
	{
		if (start > end/2)
			return (1);
		else
			return check_pal(start + 1, end - 1, s);
	}
	else
		return (0);
}

/**
 * is_palindrome - checks if a string is a palyndrom
 * @s: the string
 * Return: 1 if it is and 0 otherwise
 */

int is_palindrome(char *s)
{
	return (check_pal(0, str_len(s)-1, s));
}
