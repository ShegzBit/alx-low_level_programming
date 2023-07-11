#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: text content
 * Return: One on success | -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	/*Create fd and other neccessary variables*/
	int fd, written;

	/*Handle for txt content or filename is null*/
	if (filename == NULL)
		return (-1);

	text_content = (text_content == NULL) ? "" : text_content;

	/*Create file if it doesn't exist and make permission rw*/
	fd = open(filename, O_WRONLY | O_TRUNC);
	if (fd == -1)
		open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	/*Write to file and close file*/
	written = write(fd, (void *)text_content, strlen(text_content));
	if (written == -1)
	{
		close(fd);
		return (-1);
	}

	return (1);
}
