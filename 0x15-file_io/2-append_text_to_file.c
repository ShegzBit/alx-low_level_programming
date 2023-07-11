#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: file name
 * @text_content: content to be written
 * Return: 1 on success | -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
/*Create file descriptors and neccessary variables*/
	int fd, written;

/*Check if filename is null*/
	if (filename == NULL)
		return (-1);
/*Handle for text_content is null*/
	text_content = (text_content == NULL) ? "" : text_content;
/*if the file does not exist return -1*/
	fd = open(filename, O_WRONLY | O_CREAT);
	if (fd == -1)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	written = dprintf(fd, "%s", text_content);

	if (written == -1)
		return (-1);
	return (1);
}
