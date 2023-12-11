#include "main.h"

/**
 * _memcpy - copies memory erea
 * @dest: the memory erea to where data will be copied
 * @src: the memory erea from where data will be copied
 * @n: the number of byte to be copied
 * Return: the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
