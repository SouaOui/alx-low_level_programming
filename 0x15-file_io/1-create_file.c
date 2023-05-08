#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: pointer to the file const char
 * @text_content: pointer to the text to be inserted in the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f_des, l = 0, wr;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		while (text_content[l])
			l++;
	}
	f_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	wr = write(f_des, text_content, l);
	if (f_des == -1 || wr == -1)
		return (-1);
	close(f_des);
	return (1);
}
