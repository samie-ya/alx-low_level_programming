#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - to concatenate a command line arguments to a string
 *
 * @ac: number of command line arguments passed
 *
 * @av: command argumnets
 *
 * Return: the string
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0, k = 0;
	char *s, *dest;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;
		while (s[j] != '\0')
		{
			j++;
			len++;
		}
	}
	dest = malloc(sizeof(char) * (len + 1 + ac));
	if (dest == NULL)
	{
		return (NULL);
		free(dest);
	}
	for (i = 0; i < ac; i++)
	{
		s = av[i];
		for (j = 0; s[j] != '\0'; j++)
		{
			dest[k] = s[j];
			k++;
		}
		dest[k] = '\n';
		k++;
	}
	dest[len + ac] = '\0';
	return (dest);
}
