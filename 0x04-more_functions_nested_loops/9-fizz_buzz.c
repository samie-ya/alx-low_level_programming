#include <stdio.h>
/**
* main- print 1-100
*
* Return: value 0
*/
int main(void)
{
int i = 1;
while (i <= 100)
{
if ((i % 5 != 0) && (i % 3 != 0))
{
printf("%d", i);
}
if ((i % 5 == 0) && (i % 3 == 0))
{
printf("FizzBuzz");
}
if ((i % 3 == 0) && !(i % 5 == 0))
{
printf("Fizz");
}
if ((i % 5 == 0) && !(i % 3 == 0))
{
printf("Buzz");
}
if (i == 100)
{
continue;
}
printf(" ");
i++;
}
printf("\n");
return (0);
}
