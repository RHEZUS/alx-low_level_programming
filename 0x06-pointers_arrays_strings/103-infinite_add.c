#include "main.h"

/**
 * infinite_add - makes addition of numbers
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer where the result will be stored
 * @size_r: the size of the buffer
 * Return: the addition's result
 */


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int size_n1, size_n2, solution, remain = 0;
	int s = size_r - 1;

	while (n1[size_n1] != '\0')
		size_n1++;
	while (n2[size_n2] != '\0')
		size_n2++;

	while (size_n1 >= 0 || size_n2 >= 0)
	{
		if (size_n1 >= 0 && size_n2 >= 0)
		{
			solution = (int)(n1[size_n1] + n2[size_n2]) + remain;
		}
		else if (size_n1 >= 0 && size_n2 < 0)
		{
			solution = (int)(n1[size_n1]) + remain;
		}
		else if (size_n1 < 0 && size_n2 >= 0)
		{
			solution = (int)(n2[size_n2]) + remain;
		}

		if (solution > 10)
		{
			r[s] = (char)(solution - 10);
			remain = 1;
		}
		else
		{
			r[s] = (char)solution;
			remain = 0;
		}
		s--;
		size_n1--;
		size_n2--;
	}
	return (r);

}
