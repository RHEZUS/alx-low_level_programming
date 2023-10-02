#include "main.h"

/**
 * main - prints the name of the program
 * @argc: the number of arguments
 * @argv: the string array of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
