#include "main.h"

/**
 * _isupper - checks if a number is uppercase or not
 * @c : the character to be checked
 * Return: 1 if uppercase and 0 otherwise
 */

int _isupper(int c);

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
