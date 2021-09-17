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
int i = 1;
int m = 0;
int div;
int n[] = {25, 10, 5, 2, 1};
if (*argv[i] > 0)
{
while (m < 5)
{
if (*argv[i] >= n[m])
{
div = *argv[i] / n[m];
if (div == 0)
{
printf ("%d\n", div);
}
}
m++;
}
}
if (*argv[i] < 0)
{
printf("0\n");
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
