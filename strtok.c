#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * split - split strings and stores the addresses in an array
 *
 * @str: strin
 * @tok: tok
 *
 * Return: Pointer to array of strings
 */

char **split(char *str, char *tok)
{

	char **splitted;
	char *strcopy = NULL;
	int len = 0, i = 1;

	strcopy = malloc(sizeof(char) * strlen(str));

	strcpy(strcopy, str);
	if (strtok(strcopy, tok) != NULL)
		len++;
	while (strtok(NULL, tok) != NULL)
	{
		len++;
	}

	if (len > 0)
	{
		splitted = malloc(sizeof(char *) * len + 1);

		if (splitted != NULL)
		{
			splitted[0] = strtok(str, tok);
			while (len > i)
			{
				splitted[i] = strtok(NULL, tok);
				i++;
			}
			splitted[i] = NULL;
			return (splitted);
		}
	}
	return (NULL);
}

/**
 * main - prints out an array of strings
 *
 * Return 0 Always
 */

int main(void)
{
	char **ptrstring;
	char *tok = " ";

	char gfg[100] = "  1997 ford e350 ac 3000.00";

	ptrstring = split(gfg, tok);
	if (ptrstring == NULL)
		return (1);


	while (*ptrstring)
	{
		printf("%s\n", *ptrstring);
		ptrstring++;
	}
	return (0);
}
