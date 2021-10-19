#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>  
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

/**
*
*
*
*
*
*
*
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd;
	char *s;

	if (filename == NULL)
	{
		return (0);
	}

	s = malloc(sizeof(char) * letters);
	if (s == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY, 0600);

	if (fd == -1)
	{
		return (0);
	}
	write(STDOUT_FILENO, s, letters);
	rd = read(fd, s, letters);
	free(s);
	close(fd);
	return (rd);
}
