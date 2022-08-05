#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - executes the command ls -l /tmp in 5 different chils processes
 *
 * Description: each should be created by the same process (the father).
 *		Wait for a child to exit before creating a new child.
 *
 *
 * Return: 0 if there's no error and 1 if there's an error
 */


int main(void)
{
	int i, status, exec;
	char *argv[] = {"/bin/ls", NULL};
	pid_t pid;

	for (i = 0; i < 5; i++)
	{
		pid  = fork();
		if (pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (pid == 0)
		{
			exec = execve(argv[0], argv, NULL);
			sleep(50);
			if (exec == -1)
			{
				perror("Error:");
				return (1);
			}
		}
		else
			wait(&status);
	}

	return (0);
}
