#include <stdio.h>

/**
 * main - prints all the arguments without using argc
 *
 * @argc: argument pointer
 * @argv: argument vector
 *
 * Return: 0 Always
 */

int main(int argc __attribute__((unused)), char **argv)
{
	int i = 0;

	while (argv[i] != NULL)
	{
		printf("argv[%d] is %s", i, argv[i]);
		i++;
	}
	return (0);
}
