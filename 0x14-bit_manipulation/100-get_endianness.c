#include "main.h"

/**
 * get_endianness - checks the endianness of a system.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte = (unsigned char *)&num;

	return ((int)*byte);
}
