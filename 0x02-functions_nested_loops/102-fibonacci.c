#include <stdio.h>
/**
* main - print 50 fibonacci
*
* Return: value 0
*/
int main(void)
{
long int i = 1;
long int j = 2;
long int l;
printf("%ld, %ld", i, j);
for (l = 3;  l <= 50; l++)
{
long int k = i + j;
printf(", ");
printf("%ld", k);
i = j;
j = k;
}
printf("\n");
return (0);
}
