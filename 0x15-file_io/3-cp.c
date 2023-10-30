#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * check_error - prints error messages and exits with exit number
 *
 * @error: either the exit number or file descriptor
 * @fname: name of either file_in or file_out
 * @fd: file descriptor
 *
 * Return: 0 on success
*/

int check_error(int error, char *fname, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fname);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fname);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);
		default:
			return (0);
	}
}



/**
 * main - copies the content of a file to another file.
 * @argc: the number of arguments
 * @argv: the list of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	int file_from, file_to;
	int bytes_read = 0, bytes_written = 0;
	int close_from, close_to;

	if (argc != 3)
		check_error(97, NULL, 0);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		check_error(98, argv[1], 0);



	file_to  = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		check_error(99, argv[2], 0);

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) != 0)
	{
		if (bytes_read == -1)
			check_error(99, argv[1], 0);

		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
			check_error(99, argv[2], 0);

	}

	close_from = close(file_from);
	if (close_from == -1)
		check_error(100, argv[1], close_from);

	close_to = close(file_to);
	if (close_to == -1)
		check_error(100, argv[2], close_to);
	return (0);
}
