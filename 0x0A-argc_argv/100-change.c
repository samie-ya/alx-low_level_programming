#include "main.h"
#include <stdio.h>
/**
*
*
*
*
*
*
*
*/
int main(int argc, char *argv[])
{
int a = atoi(argv[1]);
int div;
if (argc == 2)
{
if (a >= 25 && a % 25 == 0)
{
div = a / 25;
}
if (a >= 10 && a % 10 == 0)
{
div = a / 10;
}
if (a >= 5 && a % 5 == 0)
{
div = a / 5;
}
if (a >= 2 && a % 2 == 0)
{
div = a / 2;
}
if (a >= 1 && a % 1 == 0)
{
div = a / 1;
}
if (a < 0)
{
printf("0\n");
}
printf("%d\n", div);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
