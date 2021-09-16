#include "main.h"
int _prime(int n, int i);
/**
* is_prime_number- prints out only prime numbers
*
* @n: the prime number to be checked
*
* Return: if prime number - 1
*         if not prime number - 0
*/
int is_prime_number(int n)
{
return (_prime(n, 1));
}
/**
* _prime- to find prime number
*
* @n: the number to be evaluated
*
* @i: natural number
*
* Return: _prime(n, i + 1)
*/
int _prime(int n, int i)
{
if (n % i == 0 && i > 1)
{
return (0);
}
if (n <= 1)
{
return (0);
}
if (i == n / 2)
{
return (1);
}
return (_prime(n, i + 1));
}
