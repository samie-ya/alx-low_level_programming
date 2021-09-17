#include "main.h"
#include <stdio.h>
/**
* main- function used
*
* @argc: commandline arguments that prints the number of arguments used
*
* @argv: commandline argument used to point to the char
*
* Return: value 0
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[0]);
return (0);
}
