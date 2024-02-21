#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <string.h>

/**
 * main - splits a line of command into an array of commands
 *
 * Return - number of commands
 */

int main(void)
{
	char *cmd, **cmds, *cmdline = NULL;
	size_t n = 0;
	ssize_t nbytes = 0;
	int m = 0, i;


	cmds = (char **)malloc(sizeof(char *) * 1);
	if (cmds == NULL)
		return (0);

	printf("$ ");
	if ((nbytes = getline(&cmdline, &n, stdin)))
	{
		cmd = strtok(cmdline, " ");
		while (cmd)
		{
			cmds[m] = cmd;
			cmd = strtok(NULL, " ");
			++m;
			if (cmd != NULL)
				cmds = (char **)realloc(cmds, sizeof(char *) * (m + 1));

		}
		--m;
		i = 0;
		while((cmds[i] != NULL) && (i < m))
		{
			printf("argv[%d] -> %s\n", i, cmds[i]);
			++i;
		}
		printf("argv[%d] -> %s", i, cmds[i]);
		free(cmdline);
	}
	free(cmds);
	return (++m);
}








