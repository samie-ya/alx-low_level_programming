#include <stdio.h>
#include <stdlib.h>
/**
*
*
*
*
*
*
*
*
*/

int main(int ac, char **av)
{
	int i, j, num1, num2, res;
	if (ac != 3)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; j < av[1]; j++)
			{
				if (av[1][j] <= '0' || av[1][j] >= '9')
				{
					printf("Error\n");
					exit(98);
				}
			}
			for (j = 0; j < av[2]; j++)
			{
				if (av[2][j] <= '0' || av[2][j] >= '9')
				{
					printf("Error\n");
					exit(98);
				}
			}
			num1 = atoi(av[1]);
			num2 = atoi(av[2]);
			res = num1 * num2;
			printf("%d\n", res);
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}

/**
* _strlen - get the length of string
*
* @str: the string to be checked
*
* Return: the length of string
*/

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
