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
int i;
if (argc > 1)
{
for (i = 1; i < argc; i++)
_putchar(argv);
}
else
{
printf("0\n");
}
return (0);
}
