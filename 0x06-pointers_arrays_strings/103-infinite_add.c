#include "main.h"

/**
 * rev_string - reverses strings
 * @n: the string to reverse
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}



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
	int i = 0, j = 0, s = 0, remain = 0, solution = 0, val1, val2;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (i >= 0 || j >= 0 || remain == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = n1[i] - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = n2[j] - '0';
		solution = val1 + val2 + remain;
		if (solution >= 10)
		{
			*(r + s) = (solution - 10) + '0';
			remain = 1;
		}
		else
		{
			*(r + s) = solution + '0';
			remain = 0;
		}
		s++;
		i--;
		j--;
	}
	if (s == size_r)
		return (0);
	r[s] = '\0';
	rev_string(r);
	return (r);
}
