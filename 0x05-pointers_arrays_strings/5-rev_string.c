#include "main.h"

/**
 * rev_string - reverses a string
 * @s: thestring to reverse
 */

void rev_string(char *s);

void rev_string(char *s)
{
	char *str = s;
	char *rstr = s;
	int i = 0, j = 0;

	while (str[j] != '\0')
		j++;
	j--;
	while (j >= 0)
	{
		rstr[i] = str[j];
		i++;
		j--;
	}
	*str = *rstr;
}
