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
	int fd, rd, fd1;
	char s[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}
	fd = open(av[1], O_RDWR);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	
	rd = read(fd, s, 1024);
	fd1 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	write(fd1, s, rd);
	if (close(fd) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (close(fd1) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	close(fd);
	close(fd1);
	return (0);
}
