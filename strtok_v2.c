#include <stddef.h>

/**
 * _strlen - finds the length of a string
 *
 * @str: string
 *
 * Returns: the length of a string
 */


int _strlen(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}

	return (len);
}

/**
 * strtok_v2 - complete version of strtok
 *
 * @str: string to be tokenized
 * @dem: delimiter string
 *
 * Return: NULL or address of a token
 */


char *strtok_v2(char *str, char *dem)
{
	int dem_len, i = 0;
	static char *buf = NULL;
	char *token;

	if (!buf)
		buf = str;
	
	if (!*buf || !dem)
		return (NULL);

	token = buf;
	dem_len = _strlen(dem);

	while (*buf && i != dem_len)
	{
		while (*buf && *buf != *dem)
			buf++;

		while (buf[i] == dem[i] && i < dem_len)
			i++;

		if (i == dem_len)
		{
			*buf = '\0';
			buf += dem_len;
		}
		else
			buf++;
	}

	return (token);

}
