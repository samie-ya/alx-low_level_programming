#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*
*
*
*
*
*/

char **strtow(char *str)
{
	int i = 0, j = 0, k;
	char *s;

	s = malloc(sizeof(char *) * j);
	if (s == NULL)
	{
		return (0);
		free(s);
	}
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			k = 0;
			s[j][k] = str[i + 1];
			k++;
		}
		else
		{
			s[j][k] = '\0';
			j++;
		}
		i++;
	}
	return (s);
}
