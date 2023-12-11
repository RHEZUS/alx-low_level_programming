#include "main.h"

/**
 * _strstr - returns the pointer to the first occurence of alocated substring
 * @haystack: the string
 * @needle:the substring
 * Return: the pointer to the first match or 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
