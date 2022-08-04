#include <stdio.h>
#include "main.h"

/**
 * main - prints out some strings
 *
 * Return 0 Always
 */


int main()
{
	char str[80] = "     This    is    a     test  ";
	char *token = NULL;

	token = strtok_v1(str, ' ');
	while (token)
	{
		printf("%s\n", token);
		token = strtok_v1(NULL, ' ');
	}

	return (0);
}
