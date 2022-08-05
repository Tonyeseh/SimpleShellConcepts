#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_PATH - prints each directory contained in the environment variable
 *		PATH, one directory per line.
 *
 * Return: Nothing
 */

void print_PATH(void)
{
	char *path;
	char *token;

	path = _getenv("PATH");
	token = strtok(path, ":");
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, ":");
	}
}
/*

int main ()
{
	print_PATH();

	return (0);
}
*/
