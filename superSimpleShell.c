#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


/**
 * main - super simple shell
 *
 * Description: first version of a super simple shell that can run commands
 *		with their full paths, without any arguemnt.
 *		* program would not get to the retuutn statement but would be
 *		stopped by a CTRL + C (^C)
 *
 * Return: 0 Always
 */

int main(void)
{
	char *argv[2];
	int status, exec;
	size_t i = 1024;
	pid_t pid;

	argv[1] = NULL;
	while (1)
	{
		printf("#cisfun$ ");
		getline(&argv[0], &i, stdin);
		argv[0] = strtok(argv[0], "\n");
		pid = fork();
		if (pid == -1)
		{
			perror("Error:");
			sleep(15);
			return (1);
		}
		if (pid == 0)
		{
			exec = execve(argv[0], argv, NULL);
			if (exec == -1)
			{
				perror("Error:");
				sleep(1);
				return (1);
			}
			return (0);
		}
		else
			wait(&status);

	}

	return (0);
}
