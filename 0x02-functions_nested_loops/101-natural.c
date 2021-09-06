#include <stdio.h>
/**
* main- add multiple of 3 and 5 less than 1024
*
* Return: value 0
*/
int main(void)
{
int i;
int j = 0;
int k = 0;
int l = 0;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0)
{
j = j + i;
}
if (i % 5 == 0)
{
k = k + i;
}
if (i % 15 == 0)
{
l = l + i;
}
}
printf("%d" ,((k + j) -l));
printf("\n");
return (0);
}
