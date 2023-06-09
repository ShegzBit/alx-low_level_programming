#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: text content
 * Return: One on success | -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
/*Create file descriptor*/
	int fd, written;

	if (filename == NULL)
		return (-1);
	text_content = (text_content == NULL) ? "" : text_content;
/*Open fd*/
	fd = open(filename, O_WRONLY | O_TRUNC);
	if (fd == -1)
		fd = open(filename, O_WRONLY | O_CREAT, S_IWUSR | S_IRUSR);
	if (fd == -1)
		return (-1);
/*write to it*/
	written = write(fd, text_content, strlen(text_content));
	if (written == -1)
		return (-1);
	/*Close fd*/
	close(fd);
	return (1);
}
