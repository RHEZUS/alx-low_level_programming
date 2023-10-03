#include "main.h"

/**
 *  create_array - creates an array of chars, and initializes it.
 *  @size: the size of the array
 *  @c: the character
 *  Return: NULL if the size is 0 and a pointer to the array otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *strArr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	strArr = (char *)malloc(size * (sizeof(char)));
	if (strArr == NULL)
		return (NULL);
	while (i < size)
	{
		strArr[i] = c;
		i++;
	}

	return (strArr);
}
