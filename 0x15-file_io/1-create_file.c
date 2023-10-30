#include "main.h"

/**
 * create_file -  creates a file.
 *
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, flag;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	flag = write(file, text_content, strlen(text_content));

	if (file == -1 || flag == -1)
		return (-1);

	close(file);
	return (1);
}
