#include <stdio.h>
/**
* main - print 50 fibonacci
*
* Return: value 0
*/
int main(void)
{
int i;
int num1 = 1;
int num2 = 2;
int num3 = num1 + num2;
int num4 = 50;
printf("%d, %d, ", num1, num2);
for (i = 3; i <= num4; ++i)
{
printf("%d, ", num3);
num1 = num2;
num2 = num3;
num3 = num1 + num2;
}
return (0);
}
