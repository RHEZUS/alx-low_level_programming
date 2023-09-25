#include "main.h"

/**
 * _strstr - returns the pointer to the first occurence of alocated substring
 * @haystack: the string
 * @needle:the substring
 * */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	char *strstart;
	while (haystack[i] != '\0')
	{
		strstart = &haystack[i];
		while (haystack[i] != '\0' && needle[j] != '\0' && haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
		{
			return strstart;
		}
		j = 0;
		i++;
	}
	return ("NULL");
}
