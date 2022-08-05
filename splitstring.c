#include <stdio.h>
#include <string.h>

int len_split(char *str, char *delim);
char **split_string()

/**
 * main - splits strings and returns an array of each word of the string
 *
 * Return: Always 0
 */

int main()
{
	char **ptr;
	char str[] = "The splitting of strings.";

	ptr = split_string();
	return (0);
}
