#include "main.h"
#include <stdio.h>
/**
* main- function used
*
* @argc: commandline to check the number of arguments used
*
* @argv: commandline points to char
*
* Return: value 0 - if there are numbers
*       : value 1 - if there are no number
*/
int main(int argc, char *argv[])
{
int i = 1;
int sum = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (*argv[i] < 48 || *argv[i] > 57)
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
