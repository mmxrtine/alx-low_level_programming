#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, _write;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		close(fd);
		return (-1);
	}

	_write = write(fd, text_content, strlen(text_content));
	if(_write == -1 || (size_t)_write != strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
