#include "main.h"
/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: name of the file
 * @text_content: null terminated string to add at end of file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fdwrite, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if ((text_content == NULL) && (fd != -1))
	{
		close(fd);
		return (1);
	}

	while (text_content[len] != '\0')
		len++;

	fdwrite = write(fd, text_content, len);

	if (fdwrite == -1 || fdwrite != len)
		return (-1);

	return (1);
}
