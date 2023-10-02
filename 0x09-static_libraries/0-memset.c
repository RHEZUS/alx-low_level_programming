#include "main.h"

/**
 * _memset - fills the n first bytes of a memory with constant byte
 * @s: the pointer to  the mmomory
 * @b: the byte to be filled with
 * @n: the number of byte to fill
 * Return: the pointer to the momory erea s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
