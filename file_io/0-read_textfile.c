#include "main.h"
/**
 * read_textfile - function reads a text file and prints it
 * @filename: name
 * @letters: content
 *
 * Return: the content
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters));
	r = read(fd, buffer, letters);
	if (r == -1)
	{
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		return (0);
	}
	close(fd);
	free(buffer);
	return (w);
}

