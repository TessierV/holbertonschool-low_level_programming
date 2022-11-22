#include "main.h"
/**
 * create_file - create file
 * @filename: name
 * @text_content: content
 *
 * Return: the content
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_WRONLY | O_TRUNC, S_IWRITE | S_IREAD);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
		close(fd);
		return (1);
	}
	if (text_content)
	{
		write(fd, text_content, strlen(text_content));
	}
	close(fd);
	return (1);
}

