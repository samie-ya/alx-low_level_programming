#include <stdio.h>
/**
* main- function used
*
* Return: value 0
*/
int main(void)
{
int i;
long int j = 1;
long int k = 2;
long int l = j + k;
long int sum = 0;
for (i = 3; i < 32; i++)
{
j = k;
k = l;
l = j + k;
if (l % 2 == 0)
{
sum += l;
}
}
printf("%ld\n", sum + 2);
return (0);
}
