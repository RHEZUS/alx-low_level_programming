#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer to a newly allocated memory containing s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int l1 = 0, l2 = 0, i = 0, j = 0, len;
	char *strArr;

	if (s1 != NULL)
	{
		while (s1[i++] != '\0')
			l1++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			l2++;
	}

	len = l1 + l2;
	strArr = malloc(len * sizeof(char));
	if (strArr == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		strArr[i] = s1[i];
	for (j = 0; j < l2; j++, i++)
		strArr[i] = s2[j];
	strArr[len] = '\0';

	return (strArr);
}
