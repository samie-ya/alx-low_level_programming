#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file- to create a file
 *
 * @filename: pointer to the file
 *
 * @text_content: what is to be written on a file
 *
 * Return: 1 on success
 *         0 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, wr;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (0);
	i = 0;
	while (text_content[i] != '\0')
	{
		i++;
	}
	wr = write(fd, text_content, i);
	if (wr == -1)
		return (0);
	close(fd);
	return (1);
}
