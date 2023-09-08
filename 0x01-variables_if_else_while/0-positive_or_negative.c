#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - tells if random number id positif null or negative
 * Return: alays return 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d %s\n", n, "is positive");
	}
	else if (n == 0)
	{
		printf("%d %s\n", n, "is zero");
	}
	else
	{
		printf("%d %s\n", n, "is negative");
	}
	return (0);
}
