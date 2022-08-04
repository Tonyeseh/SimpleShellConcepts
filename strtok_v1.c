#include <stddef.h>
/**
 * strtok_v1 - works like string token but it uses character as delimiter
 *
 * @str: pointer to the string
 * @dem: character delimiter
 *
 * Description: holds the address of the string in memory until it divides the string and it's NULL
 * or another string is given;
 *
 * Return: Address of the string before the delimiter or
 *	NULL if the string is NULL
 */

char *strtok_v1(char *str, char c)
{
	static char *buffer = NULL;
	char *token;

	if (!buffer || str)
		buffer = str;

	while (*buffer && *buffer == c)
		buffer++;

	if (!*buffer)
		return (NULL);

	token = buffer;

	while (*buffer && *buffer != c)
		buffer++;

	if (*buffer == c)
	{
		*buffer = '\0';
		buffer++;
	}

	return (token);


}
