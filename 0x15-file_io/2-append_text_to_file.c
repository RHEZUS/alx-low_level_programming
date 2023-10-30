#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add
 * at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, flag = 0;

	if (filename == NULL)
		return (-1);
	file  = open(filename, O_WRONLY | O_APPEND, 0600);

	if (file == -1)
		return (-1);
	if (text_content != NULL)
		flag = write(file, text_content, strlen(text_content) - 1);

	close(file);

	if (flag == -1)
		return (-1);

	return (1);

}
