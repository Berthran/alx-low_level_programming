#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * main - copies content of a file to another file
 * @argc: number of arguments to main
 * @argv: pointer to arguments to main
 *
 * Return: 1 on success and -1 on failure
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		char *errmsg = "Usage: cp file_from file_to\n";
		size_t bytes = strlen(errmsg);
		write(STDERROR_FILENO, errmsg, bytes);
		exit (97);
	}


	if (filename == NULL)
		return (-1);

	fd1 = open(filename, O_WRONLY | O_APPEND);
	if (fd1 == -1)
		return (-1);

	if (text_content == NULL)
	{
		if (fd1 != -1)
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
