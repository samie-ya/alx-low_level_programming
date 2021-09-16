#include "main.h"
int _prime (int n, int i);
/**
* _is_prime_number-
*
*
*
*
*
*/
int is_prime_number(int n)
{
return _prime(n, 1);
}
/**
*
*
*
*
*
*
*
*/
int _prime (int n, int i)
{
if (n % i == 0 && i > 1)
{
return (0);
}
if (n <= 1)
{
return (0);
}
if ((n / i) < i)
{
return (1);
}
return (_prime(n, i + 1));
}
