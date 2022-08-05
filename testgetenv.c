#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the environment value using getenv function
 *
 * Return: 0 Always
 */

int main()
{
	print_PATH();
	printf("PATH: %s\n", _getenv("LS_COLORS"));

	return (0);
}
