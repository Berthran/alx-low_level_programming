#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file and 
 * prints it to the POSIX stdout
 * @filename: file to be read and printed
 * @letters: number of letters to be read and printed
 *
 * Return: number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd1, fd2, fd3;
	char *buf;


	if (filename == NULL)
		return (0);

	fd1 = open(filename, O_RDONLY);
	if (fd1 == -1)
		return (0);

	buf = (char *)malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);

	fd2 = read(fd1, buf, letters);
	if (fd2 == -1)
		return (0);

	fd3 = write(STDOUT_FILENO, buf, fd2);
	if (fd3 < 0)
	{
		free(buf);
		return (0);
	}
	close(fd1);
	close(fd2);
	free(buf);
	return (fd2);
}
