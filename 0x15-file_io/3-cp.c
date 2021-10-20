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
	int fd, rd, fd1, wr, i;
	char s[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}
	fd = open(av[1], O_RDWR);
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	rd = read(fd, s, i);
	if (fd == -1 || rd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd1 = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	wr = write(fd1, s, rd);
	if (fd1 == -1 || wr == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
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
