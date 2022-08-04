#include <stdio.h>
#include "main.h"

/**
 * main - prints out tokens
 *
 * Return: 0 Always
 */


int main()
{
	char str[100] = "This is a messageSTSTSTOP STOPI am putting that word at the end of each sentenceSTOPIS";
	char *token = NULL;

	token = strtok_v2(str, "STOP");
	while (token)
	{
		printf("%s\n", token);
		token = strtok_v2(NULL, "STOP");
	}

	printf("Str is now %s\n", str);
	return (0);
}
