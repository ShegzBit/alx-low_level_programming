#include "main.h"

/**
 * main - displays header content of elf file
 * @ac: args count
 * @av: args vector
 * Return: 0 on success | 98 or failure
*/
int main(int ac, char **av)
{
	char elf_check[4], elf_conf[] = {0x7f, 'E', 'L', 'F'};
	int fd, i;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf elf_file\n");
		exit(98);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error file cannot be read\n");
		exit(98);
	}
	read(fd, elf_check, 4);
	for (i = 0; elf_conf[i]; i++)
	{
		if (elf_conf[i] != elf_check[i])
		{
			dprintf(STDERR_FILENO, "Error: file is not of elf format\n");
			exit(98);
		}
	}
	return (0);
}
