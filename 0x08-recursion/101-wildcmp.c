#include "main.h"

/**
 * check_equal - checks if two strings are equal
 * @s1: the first string
 * @s2: the second string
 * @i: the first index of the firt string
 * @j: the first index of the second string
 * Return: 1 if equal and 0 if not
 */
int check_equal(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] ==  s2[j])
		return (check_equal(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (check_equal(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (check_equal(s1, s2, i + 1, j) || check_equal(s1, s2, i, j + 1));
    
	return (0);
}

/**
 * wildcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 1 if there are equal and 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	return check_equal(s1, s2, 0, 0);
}
