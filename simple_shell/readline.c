#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	char *lineptr = NULL; /* buffer to hold what is read */
	size_t bufsize = 64;
	size_t char_read;

	lineptr = (char *)malloc(bufsize * sizeof(char));
	printf("$ ");
	char_read = getline(&lineptr, &bufsize, stdin);
	printf("Characters read: %zu\n", char_read);
	printf("%s", lineptr);
	/*getline(lineptr, n, 0) */
	return (0);
}
