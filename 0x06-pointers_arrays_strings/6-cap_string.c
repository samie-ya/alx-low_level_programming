#include "main.h"

/**
 * cap_string- capitalizes a string
 *
 * @s: string used
 *
 * Return: the string
 */

char *cap_string(char *s)
{
	char str[] = {'!', ',', ';', '.', '?', '"', '(', ')', '{', '}', 10, 9, 32};
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 122)
			{
				s[i] -= 32;
				continue;
			}
		}
		for (j = 0; j < 13; j++)
		{
			if (s[i - 1] == str[j])
			{
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] -= 32;
					continue;
				}
			}
			if (s[i] == 9)
			{
				s[i] = ' ';
			}
		}
	i++;
	}
	return (s);
}
