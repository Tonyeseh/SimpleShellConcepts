#include <stdio.h>
extern char **environ;

/**
 * main - prints the address of env and environ
 *
 * Return: 0 Always
 */

int main(int ac __attribute__((unused)), char **av __attribute((unused)), char **env)
{
	int i = 0;

	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}

	i = 0;
	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
	return (0);
}
