#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the number of arguments
 * @argv: the string array of arguments
 * Return: 1 if the program has less than 2 arguments and 0 otherwise
 */

int main(int argc, char *argv[])
{
	int mult = 0;

	if ((argc - 1) < 2)
	{
		printf("Error\n");
		return (1);
	}
	mult = atoi(argv[argc - 1]) * atoi(argv[argc - 2]);
	printf("%d\n", mult);
	return (0);
}
