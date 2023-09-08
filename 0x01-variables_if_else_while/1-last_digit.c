#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
 * main - tells if random number > 5, == 0, < 6 & !6
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0", n, n % 10);
	}
	else if ((n % 10 < 6) && (n % 10 != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, n % 10);
	}
	return (0);
}
