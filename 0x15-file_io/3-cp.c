#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * check_error - Checks for errors and handles them
 * @check: The result to be checked (e.g., return value of read/write)
 * @file: The name of the file being processed
 * @fd_from: The file descriptor of the source file
 * @fd_to: The file descriptor of the destination file
 * @exit_code: The exit code to be used if an error is encountered
 * @message: A message to be printed in the error output
 *
 * This function checks the 'check' value for errors and handles them according
 * to the specified exit code and message. It takes into account the source and
 * destination file descriptors and performs the necessary cleanup.
 */

void check_error(ssize_t check, char *file, int fd_from,
int fd_to, int exit_code, const char *message)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: %s %s\n", message, file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(exit_code);
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
	int file_from, file_to, bytes_read = 0, bytes_written = 0;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	check_error(file_from, argv[1], -1, -1, 98, "Can't read from file");

	file_to  = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	check_error(file_to, argv[2], file_from, -1, 99, "Can't write to file");

	while (bytes_read == BUFFER_SIZE)
	{
		bytes_read = read(file_from, buffer, BUFFER_SIZE);
		check_error(bytes_read, argv[1], file_from, file_to, 98
		, "Can't read from file");
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_read != bytes_written)
			bytes_written = -1;
		check_error(bytes_written, argv[2], file_from, file_to, 99
		, "Can't write to file");
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
