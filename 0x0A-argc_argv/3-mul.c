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
if (argc == 3)
{
int a, b;
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
