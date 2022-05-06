#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: string to write to file
 *
 * Return: On sucess 1, On failure -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fdwrite, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[len] != '\0')
		len++;

	fdwrite = write(fd, text_content, len);
	close(fd);

	if (len == -1 || len != fdwrite)
		return (-1);

	return (1);
}
