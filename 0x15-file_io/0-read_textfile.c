#include "main.h"

/**
 * read_textfile - read a text file and prints the result to the stdout
 * @filename: file name
 * @letters: amount letter expected to be read
 * Return: size of read string and 0 on failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	/*Create a file descriptor*/
	int fd, written, read_byte;
	char *buffer;

/*Open the file*/
	buffer = malloc(sizeof(char) * (letters + 1));
	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

/*read from file while not at end*/
	read_byte = read(fd, (void *)buffer, letters);
	if (read_byte == -1)
		return (0);

	buffer[read_byte] = '\0';
	written = write(1, buffer, read_byte);

/*Close file*/
	free(buffer);
	close(fd);
	if (written != read_byte)
		return (0);
	return (written);

}
