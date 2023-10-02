#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * containSpecial - check if the argument containd a non digit character
 * @str: the string
 * Return: 1 if it contains and 0 if not
 */

int containSpecial(char *str)
{
	while (*str != '\0')
	{
		if (!isdigit(*str))
			return (1);
		str++;
	}
	return (0);
}


/**
 * main - adds positive numbers
 * @argc: the number of arguments
 * @argv: the string array of arguments
 * Return: 0 if no numbers is passed to the program
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if ((argc - 1) < 2)
	{
		printf("0\n");
		return (1);
	}


	for (i = 1; i < argc; i++)
	{
		if (containSpecial(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum  = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
