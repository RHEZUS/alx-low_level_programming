#include "main.h"

/**
 * _strdup - copy a tring to a newly allocated memory
 * @str: the string
 * Return: null if it fails and a pointer to an array otherwise
 */

char *_strdup(char *str)
{
	char *strArr;
	int i = 0, size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
	{
		size++;
	}
	size++;

	strArr = malloc(size * sizeof(char));

	if (strArr == NULL)
		return (NULL);

	while (i < size)
	{
		strArr[i] = str[i];
		i++;
	}
	strArr[size] = '\0';

	return (strArr);
}
