#include "main.h"


/**
 * factorial - caltulates the factorial of a number
 * @n: the number
 * Return: the factorial
 */

int factorial(int n)
{
	if (n <= 1 && n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
