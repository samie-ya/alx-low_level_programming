#include "main.h"
/**
* factorial- finds factorial of a number
*
* @n: number for which factorial to be found
*
* Return: -1 if n is less than 0
*          1 if n is equal to 0
*          n * factorial(n - 1) if n is greater than 0
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
