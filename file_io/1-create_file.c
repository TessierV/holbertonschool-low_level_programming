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
	int f, w, length;

	if (filename == NULL)
	{
		return (-1);
	}
	f = open(filename, O_CREAT | O_RDWR | O_WRONLY | O_TRUNC, S_IWRITE | S_IREAD);
	if (f == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
		close(f);
		return (1);
	}
	length = strlen(text_content);
	w = write(f, text_content, length);
	if (w == -1)
	{
		return (-1);
	}
	close(f);
	return (1);
}

