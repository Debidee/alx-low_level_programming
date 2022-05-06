#include "main.h"

/**
 * read_textfile - reads a text file and prints to stdout
 * @filename: name of the file
 * @letters: number of letters
 * Return: On success, return number of letters, error return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t bytes_read, bytes_write;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	bytes_read = read(fd, buff, letters);
	if (bytes_read == -1)
		return (0);

	buff[letters + 1] = '\0';
	close(fd);

	bytes_write = write(STDOUT_FILENO, buff, bytes_read);
	if (bytes_write == -1)
		return (0);

	free(buff);

	return (bytes_read);
}
