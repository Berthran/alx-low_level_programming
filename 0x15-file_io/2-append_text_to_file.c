#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * apppend_text_to_file - adds content to file
 * @filename: file to add content to
 * @text_content: text to be added into file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content);
{
	ssize_t fd1;

	if (filename == NULL)
		return (-1);

	fd1 = open(filename, O_WRONLY|O_APPEND);
	if (fd1 == -1)
		return (-1);

	if (text_content == NULL)
	{
		if (fd1 == 1)
		{
			close(fd1);
			return (1);
		}
		return (-1);
	}

	while (*text_content)
		write(fd1, text_content++, 1);
	close(fd1);
	return (1);
}
