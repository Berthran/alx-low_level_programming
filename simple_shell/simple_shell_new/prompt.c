#include <stdio.h>
#include <stdlib.h>

ssize_t _getline(char **line, size_t *m, FILE *stream);

/**
 * main - reads commandline from user
 *
 * Return - number of commands read
 */

int main(void)
{

	/* ssize_t getline(char **lineptr, size_t *n, FILE *stream) */
	char *line = NULL;
	size_t n = 0;
	/*FILE *stream;*/
	ssize_t nbytes = 0;

	printf("$ ");

	nbytes = getline(&line, &n, stdin);
	
	if (line != NULL)
	{
		if (*line == '\n')
			printf("newline\n");
		else
			printf("%s", line);
		while (*line++)
			if (*line == '\n')
				printf("newline\n");
		if (*line)
			free(line);
	}
	return (0);
}

ssize_t _getline(char **line, size_t *m, FILE *stream)
{
	ssize_t nbytes = 0;

	if (stream == NULL)
	{
		fprintf(stderr, "Invalid stream\n");
		return(-1);
	}

	printf("%s, %ld\n", *line, nbytes);
	return (nbytes);
}

