#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - uses getline to get input from stdin and prints it out on stdout
 *
 * Return: 0 or 1
 */


int main()
{
	char *buffer = NULL;
	size_t n = 0;
	int count, w;

	printf("$ ");

	count = getline(&buffer, &n, stdin);
	if (count == -1)
	{
		printf("\nError");
		return (1);
	}

	w = write(STDOUT_FILENO, buffer, count);
	if (w == -1)
	{
		printf("\nCould nit write to file");
		return (1);
	}
	return (0);

}
