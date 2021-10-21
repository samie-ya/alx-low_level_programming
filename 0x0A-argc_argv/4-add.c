#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - to add command line arguments
 *
 * @ac: number of arguments
 *
 * @av: array of pointers to a string
 *
 * Return: 0 if success
 *         1 if argument is not integer
 */

int main(int ac, char *av[])
{
	int i, j, k;
	int sum = 0;
	char *s;

	for (i = 1; i < ac; i++)
	{
		s = av[i];
		j = 0;
		while (s[j] != '\0')
		{
			if (s[j] < 48 || s[j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		j++;
		}
	k = atoi(av[i]);
	sum += k;
	}
	printf("%d\n", sum);
	return (0);
}
