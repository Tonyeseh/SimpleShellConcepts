#include <unistd.h>
#include <stdio.h>

/**
 * main - prints put the process id of the program
 *
 * Return: 0 Always
 */

int main()
{
	pid_t prog_pid;

	prog_pid = getpid();

	printf("The pid of this program is %d\n", prog_pid);
	return (0);
}
