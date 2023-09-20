#include "main.h"

/**
 * */
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
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			return 1;
		default:
			return 0;
	}
}

char *cap_string(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
	{
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

