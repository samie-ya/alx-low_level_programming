#include "main.h"
#include <stdio.h>
/**
* main- function used
*
* @argc: commandline to tell number of arguments used
*
* @argv: commandline that points to the char
*
* Return: value 0
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
