#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * split - splits a string and returns an array of each word of the string
 *
 * @str: string to be splitted
 * @delim: delimiter
 *
 * Return: returns an array of array of strings or NULL if anything goes wrong
 */

char **split(char *str, char *delim)
{
	char *strcopy;
	char **token_ptr;
	/*char *token;*/
	int i = 0, len = 0;

	strcopy = malloc(sizeof(char) * strlen(str));
	if (strcopy == NULL)
		return (NULL);
	strcpy(strcopy, str);
	
	if (strtok(strcopy, delim) != NULL)
		len++;
	while (strtok(NULL, delim) != NULL)
		len++;

	token_ptr = malloc(sizeof(char *) * (len + 1));
	if (len > 0 && token_ptr != NULL)
	{
		token_ptr[i] = strtok(str, delim);
		while (token_ptr[i] != NULL)
		{
			i++;
			token_ptr[i] = strtok(NULL, delim);
		}
		return (token_ptr);
	}
	return (NULL);
}

/**
 * main - prints the splitted string
 *
 * Return: 0 if everything goes well
 */

int main(void)
{
	char **point;
	char str[] = "The config of the place";
	char *delim = "";
	int i = 0;

	point = split(str, delim);
	while (point != NULL && point[i] != NULL)
	{
		printf("%s\n", point[i]);
		i++;
	}
	return (0);

}
