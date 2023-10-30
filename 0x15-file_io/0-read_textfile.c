#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 *
 * @filename: the name of the file to read
 * @letters:  the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print,
 * 0 if file could not be opened and read or filename is NULL
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read = 0, bytes_written = 0;
	FILE *file;
	char *buffer = malloc(letters);

	if (filename == NULL || buffer == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);
	bytes_read = fread(buffer, 1, letters, file);

	if (bytes_read == 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written != bytes_read)
		return (0);


	free(buffer);
	fclose(file);

	return (bytes_written);
}
