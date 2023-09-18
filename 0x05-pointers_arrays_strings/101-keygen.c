#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generated a random valid password*
 * Return: always 0
 */

int main(void)
{
	int password;

	srand(time(NULL));
	password = rand();
	print("%d", password);
	return (0);
}
