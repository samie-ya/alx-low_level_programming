#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file- to append a file
 *
 * @filename: pointer to the file
 *
 * @text_content: what is to be appended on a file
 *
 * Return: 1 on success
 *         0 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	i = 0;
	while (text_content[i] != '\0')
	{
		i++;
	}
	if (text_content != NULL)
	{
		wr = write(fd, text_content, i);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
