#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main- function used
*
* @argc: number of command lines paased
*
* @argv: content of command line
*
* Return: 0
*/
int main(int argc, char *argv[])
{
int j;
int k;
int (*res)(int, int);
if (argc == 4)
{
res = get_op_func(argv[2]);
j = atoi(argv[1]);
k = atoi(argv[3]);
if (!res)
{
printf("Error\n");
exit(99);
}
printf("%d\n", res(j, k));
}
else
{
printf("Error\n");
exit(98);
}
return (0);
}
