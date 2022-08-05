#include <string.h>

extern char **environ;

/**
 * _getenv - gets an environment variable
 *
 * @name: name of the environment variable
 *
 * Return: value of the name variable or NULL
 */


char *_getenv(const char *name)
{
	int i = 0;
	char *token;

	while (environ[i])
	{
		token = strtok(environ[i], "=");
		if (strcmp(token, name) == 0)
		{
			token = strtok(NULL, "");
			return (token);
		}
		i++;
	}
	return (NULL);
}
