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
	int fd1, fd2, fd3, fd4;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open_file(argv[1], O_RDONLY, 0, 0);
	if (fd1 == -1)
		exit (98);
	buf = (char *)malloc(1024 * sizeof(char));
	fd2 = readwrite_file(fd1, buf, 1024, argv[1], 0);
	if (fd2 == -1)
	{
		free(buf);
		if (close_fd(fd1) == -1)
			exit(100);
		exit (98);
	}
	fd3 = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664, 1);
	if (fd3 == -1)
	{
		free(buf);
		if (close_fd(fd1) == -1 || close_fd(fd2) == -1)
			exit(100);
		exit (99);
	}
	fd4 = readwrite_file(fd3, buf, fd2, argv[2], 1);
	if (fd4 == -1)
	{
		free(buf);
		if ((close_fd(fd1) == -1 || close_fd(fd2) == -1) || close_fd(fd3) == -1)
			exit(100);
		exit(99);
	}
	free(buf);
	if ((close_fd(fd1) == -1 || close_fd(fd2) == -1) || (close_fd(fd3) == -1 || close_fd(fd4) == -1))
		exit(100);
	return (0);
}

	
int close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (-1);
	}
	return (0);
}

int open_file(char *filename, int flags, int mode, int err)
{
	int fd1;

	fd1 = open(filename, flags, mode);
	if (fd1 == -1)
	{
		if (err == 0)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		else
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
		return (-1);
	}
	return (fd1);
}

int readwrite_file(int fd, char *buffer, size_t bytes, char *filename, int call)
{
	int fd1;

	if (call == 0)
	{
		fd1 = read(fd, buffer, bytes);
		if (fd1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			return (-1);
		}
		return (fd1);
	}
	else
	{
		fd1 = write(fd, buffer, bytes);
		if (fd1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			return (-1);
		}
		return (fd1);
	}
}
