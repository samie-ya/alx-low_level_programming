#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - to concatenate the first n bytes to string
 *
 * @s1: string to be concatenated
 *
 * @s2: the string to concatenate
 *
 * @n: number of bytes to be concatenated
 *
 * Return: the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len;
	char *dest;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	if (n >= j)
		len = i + j;
	else
		len = i + n;
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
	{
		return (0);
		free(dest);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		dest[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		dest[i + j] = s2[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
