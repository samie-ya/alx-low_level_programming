#include <stdio.h>
/**
* getmaxprime - to get maximum prime number
*
* @n: number to be evaluated
*
* Return: Maximum prime number
*/
unsigned long int getmaxprime(unsigned long int n)
{
unsigned long int i;
unsigned long int max = -1;
if (n % 2 == 0)
{
max = 2;
while (n % 2 == 0)
{
n = n / 2;
}
}
for (i = 3; i <= n; i = i + 2)
{
while (n % i == 0)
{
max = i;
n = n / i;
}
}
return (max);
}
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
unsigned long int n = 612852475143;
printf("%lu\n", getmaxprime(n));
return (0);
}
