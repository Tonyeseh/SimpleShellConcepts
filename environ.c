#include <stdio.h>

extern char **environ;

/**
 * main - prints the environment using the global variable environ
 *
 * Return: 0 Always
 */

int main()
{
	int i = 0;

	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
	return (0);
}
