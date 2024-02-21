#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>

char **pathToFolders(char *path);
char *createfilepath(char *folder, char *filearg);

/**
 * main - lookw for files in the current PATH
 * @ac: number of arguments passed to program
 * @av: array vector  of arguments passed to program
 * @envp: environment variables available to program
 * Return: 0 if file is found, 1 if not found
 */

int main(int ac, char *av[], char *envp[])
{
	int i, j;
	char *path = NULL;
	char **folders;
	char *folder, *filepath;
	struct stat st;

	if (ac < 2)
	{
		fprintf(stderr, "Usage: %s path_to_file ...\n", av[0]);
		return (-1);
	}

	/* Get PATH Variable */
	for (i = 0; envp[i] != NULL; i++)
	{
		if ((strncmp(envp[i], "PATH=", 5)) == 0)
		{
			path = envp[i];
			break;
		}
	}
	if (path == NULL)
		return (1);

	/* Seperate PATH to different folders */
	folders = pathToFolders(path);
	i = 1;

	/* Iterate througn each argument and each folder to find the file*/
	while (i < ac)
	{
		j = 0;
		while (folders[j])
		{
			folder = folders[j];
			filepath = createfilepath(folder, av[i]);
			/* use stat() to find the file in that folder */
			/*  display the first path file was found */
			if (stat(filepath, &st) == 0)
			{
				printf("%s\n", filepath);
				break;
			}
			++j;
		}
		++i;
	}
	return (0);
}

/**
 * pathToFolders - separates the value of PATH variable into different paths
 * @path: the environment path variable
 *
 * Return: an NULL terminated array of individual paths
 */

char **pathToFolders(char *path)
{
	char **folders = NULL;
	char *key, *value, *pathcp, *folder;
	int i = 0;


	/* Separate path into key and value */
	pathcp = (char *)malloc(sizeof(char) * strlen(path));
	strcpy(pathcp, path);
	key = strtok(pathcp, "=");
	value = strtok(NULL, "=");
	(void)key;

	/* Initialize the array of file paths */
	folders = (char **)malloc(sizeof(char *) * 1);
	if (folders == NULL)
		return (NULL);

	/* Extract each file path from value and store in fpaths*/
	folder = strtok(value, ":");
	folders[i] = folder;
	++i;
	while (folder)
	{
		folder = strtok(NULL, ":");
		folders = (char **)reallocarray(folders, i + 1, sizeof(char *));
		folders[i] = folder;
		++i;
	}
	return (folders);
}


/**
 * createfilepath - creates an absolute file path
 * @folder: the folder the file is contained in
 * @filearg: the name of the file passed as argument
 *
 * Return: an absolute path to the file
 */

char *createfilepath(char *folder, char *filearg)
{
	char *filepath;
	size_t lenOfFolder = strlen(folder);
	size_t lenOfFilearg =  strlen(filearg);
	size_t i, j;

	filepath = (char *)malloc(sizeof(char) * (lenOfFolder + 1 + lenOfFilearg));

	if (filepath == NULL)
		return (NULL);

	for (i = 0; i < lenOfFolder; i++)
	{
		filepath[i] = folder[i];
	}
	/* add "/" + the filename to each folder */
	if (filepath[i - 1] != '/')
	{
		filepath[i] = '/';
		++i;
	}
	for (j = 0; j < lenOfFilearg; j++)
	{
		filepath[i] = filearg[j];
		++i;
	}
	return (filepath);
}


