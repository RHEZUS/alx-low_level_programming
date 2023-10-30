#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - copies the content of a file to another file.
 * @argc: the number of arguments
 * @argv: the list of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	int file_from, file_to, bytes_read = 0, bytes_written = 0;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to  = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (file_to == -1)
	{
		close(file_from);
		dprintf(2, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(file_from, buffer, sizeof(buffer))))
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to file %s\n", argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close(file_from);
		close(file_to);
		exit(98);
	}
	if (close(file_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
