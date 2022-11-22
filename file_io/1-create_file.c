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
	int f;

	if (filename == NULL)
	{
		return (-1);
	}
	f = open(filename, O_RDWR | O_CREAT | O_WRONLY | O_TRUNC, S_IWRITE | S_IREAD);
	if (f == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}
	if (text_content)
	{
		write(f, text_content, strlen(text_content));
	}
	close(f);
	return (1);
}

