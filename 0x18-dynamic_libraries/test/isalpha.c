#include "main.h"
/**
 * _isalpha - checks alphabetic characters
 * @c: the character to be checked
 * Return: 1 if it is alphabetic character and 0 otherwise
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
