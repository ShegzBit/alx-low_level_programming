#include "main.h"

#define buffer 1024

/**
 * fd_to_opener - opens av[1]
 * @f_to: file to open
 * Return: 99 on failure | fd_from on success
*/
int fd_to_opener(char *f_to)
{
	int fd_to;

	fd_to = open(f_to, O_WRONLY | O_TRUNC);
	if (fd_to == -1)
		fd_to = open(f_to, O_WRONLY | O_TRUNC | O_CREAT, 00664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_to);
		exit(99);
	}
	return (fd_to);
}

/**
 * fd_from_opener - opens av[1]
 * @f_from: file to open
 * Return: 98 on failure | fd_from on success
*/
int fd_from_opener(char *f_from)
{
	int fd_from;

	fd_from = open(f_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
		exit(98);
	}
	return (fd_from);
}

/**
 * main - simulates cp command
 * @ac: args count
 * @av: args vector
 * Return: 97, 98, 99, 100 on error | 0 on success
*/
int main(int ac, char **av)
{
	int fd_from, fd_to, written, read_byte;
	char *content = malloc(sizeof(char) * buffer);

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (content == NULL)
		return (1);
	fd_from = fd_from_opener(av[1]);
	fd_to = fd_to_opener(av[2]);
	do {
		read_byte = read(fd_from, content, buffer);
		if (read_byte == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read to %s\n", av[1]);
			exit(98);
		}
		written = write(fd_to, content, read_byte);
		if (written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	} while (read_byte != 0);
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	free(content);
	return (0);
}
