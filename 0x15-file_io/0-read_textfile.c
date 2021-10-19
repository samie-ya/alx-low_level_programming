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
	fd = open(filename, O_RDWR);

	if (fd == -1)
	{
		return (0);
	}
	rd = read(fd, s, letters);
	write(STDOUT_FILENO, s, letters);
	free(s);
	close(fd);
	return (rd);
}
