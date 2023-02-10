#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: file to be created
 * @text_content: text to be written into file
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd1, fd2;

	if (filename == NULL)
		return (-1);

	fd1 = creat(filename, 0600);
	if (fd1 == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd1);
		return (1);
	}

	fd2 = open(filename, O_RDWR | O_TRUNC);
	if (fd2 == -1)
	{
		close(fd1);
		return (-1);
	}

	while (*text_content)
		write(fd2, text_content++, 1);
	close(fd1);
	close(fd2);
	return (1);
}
