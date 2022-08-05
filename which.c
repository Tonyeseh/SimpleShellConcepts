#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int ac, char **av)
{
	unsigned int i = 1;
	struct stat st;
	char *path;

	if (ac < 2)
	{
		printf("Usage: %s path_to_file ...\n", av[0]);
		return (1);
	}
	while (av[i])
	{
		printf("%s:", av[i]);
		path = malloc(sizeof(char) * (strlen(av[i]) + 2));
		strcat(path, "./");
		strcat(path, av[i]);
		printf("%s\n", path);
		if (stat(av[i], &st) == 0)
			printf(" FOUND\n");
		else
			printf(" NOT FOUND\n");

		i++;
	}
	return (0);

}
