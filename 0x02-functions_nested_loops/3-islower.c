#include "main.h"
/**
 * _islower - checks if a character is lowercase or not
 * @c: the character to be checked
 * Return: 1 if the carracter is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c > (char)95 && c < (char)122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
