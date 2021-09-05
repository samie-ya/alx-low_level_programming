#include <stdio.h>
/**
*
*
*
*/
int main(void)
{
int i = 1;
while (i < 10)
{
int n = (i % 3 == 0);
int j = (i % 5 == 0); 
{
if (n || j)
{
int k = n + j;
printf("%d, ", k);
}
}
i++;
}
printf("\n");
return (0);
}
