#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * read_textfile- reads and prints textfile
 *
 * @filename: pointer to the file
 *
 * @letters: number of bytes to write or display
 *
 * Return: On success - Actual number of letters it could read
 *        On failure - 1
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
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
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	rd = read(fd, s, letters);
	if (rd == -1)
	{
		return (0);
	}
	wr = write(STDOUT_FILENO, s, rd);
	if (wr == -1)
	{
		return (0);
	}
	free(s);
	close(fd);
	return (rd);
}
