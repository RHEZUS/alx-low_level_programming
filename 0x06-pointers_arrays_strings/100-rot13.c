#include "main.h"


/**
 * rot13 - encodes a string with ROT13 format
 * @s: the string to be encoded
 * Return: an incoded string
 */


char *rot13(char *s)
{
	int i = 0 , j = 0;

	char a[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

	while (s[i] != '\0')
	{
		while (a[j] != '\0')
		{

			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
