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
	int f, w, len;

	f = open(filename, O_CREAT | O_RDWR | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1 || filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	for (len = 0; text_content[len] != '\0'; len++)
		;
	/*length = strlen(text_content);*/
	w = write(f, text_content, len);
	if (w == -1)
		return (-1);
	close(f);
	return (1);
}

