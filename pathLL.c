#include <string.h>
#include <stdlib.h>

extern char **environ;

struct path
{
	char *PATH;
	char **ptr;
};

/**
 * pathLL - builds a linked list of the PATH directories
 *
 * Return: address of the first linked list node or NULL
 */


struct path *pathLL(void)
{
	struct path *path;
	int len = 0;
	char *pathcpy, *token, *paths;

	paths = _getenv("PATH");
	pathcpy = malloc(sizeof(char) * strlen(paths));
	strcpy(pathcpy, paths);
	if (strtok(pathcpy, ":") != NULL)
		len++;
	while (strtok(NULL, ":") != NULL)
		len++;

	path = malloc(sizeof(struct path) * len);
	if (path != NULL)
	{
		while ()
	}

}
