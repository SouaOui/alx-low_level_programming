#include "main.h"
/**
 * append_text_to_file - function that append the text to the file
 * @filename: pointer to the file naem
 * @text_content: pointer to the text to be inserted to the file
 * Return: 1 on success and -1 if Failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0, fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (-1);
	while (text_content)
	{
		len++;
		text_content++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	write(fd, text_content, len);
	if (fd == -1)
		return (-1);
	return (1);
}
