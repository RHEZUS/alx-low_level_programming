#include "main.h"

/**
 * rev_string - reverses a string
 * @s: thestring to reverse
 */

void rev_string(char *s);

void rev_string(char *s)
{
	char *str = s;
	int swap;
	int i = 0, j = 0;

	while (str[j] != '\0')
		j++;

	while (j >= 0)
	{
		swap = str[j];
		str[j] = str[i];
		str[i] = swap;
		i++;
		j--;
	}
}
