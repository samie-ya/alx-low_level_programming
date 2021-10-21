#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main- to create commandline arguments
 *
 * @ac: number of arguments passed
 *
 * @av: the content of arguments
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd, rd, fd1, wr;
	char s[3000];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(1, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	rd = read(fd, s, 3000);
	if (rd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[2]);
		exit(98);
	}
	fd1 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	wr = write(fd1, s, rd);
	if (fd1 == -1 || wr == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (close(fd1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	close(fd);
	close(fd1);
	return (0);
}
