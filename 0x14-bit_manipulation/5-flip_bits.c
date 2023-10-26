#include "main.h"

/**
 * count_set_bits - set bits in the XOR result
 * @n: the result of XOR
 * Return: the count
 */


int count_set_bits(int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}


/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: the first number
 * @m: te second number
 * Return: the number of bits to flip
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_set_bits(n ^ m));
}
