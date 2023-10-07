#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the number of byte to copy from s2
 * Return: the pointer to the momory or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strArr;
	unsigned int len, i = 0, lenS1 = 0, lenS2 = 0;

	if (s1 == NULL)
		lenS1 = 0;
	else
	{
		while (s1[lenS1] != '\0')
			lenS1++;
	}
	if (s2 == NULL)
		lenS2 =  0;
	else
	{
		while (s2[lenS2] != '\0')
			lenS2++;
	}
	if (n > lenS2)
		n = lenS2;
	len = lenS1 + n;

	strArr = (char *)malloc(sizeof(char) * len + 1);
	if (strArr == NULL)
		return (NULL);
	for (i = 0; i < lenS1; i++)
		strArr[i] = s1[i];
	for (i = 0; i < n; i++)
		strArr[i + lenS1] = s2[i];
	strArr[len] = '\0';
	return (strArr);
}
