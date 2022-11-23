#include "main.h"
/**
 * append_text_to_file - function who append text at the end of a file
 * @filename: name
 * @text_content: content
 *
 * Return: 1 if true -1 if false
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, w, len;

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1 || filename == NULL)
	{
		close(f);
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	len = strlen(text_content);
	w = write(f, text_content, len);
	if (w == -1)
	{
		return (-1);
	}
	close(f);
	return (1);
}

