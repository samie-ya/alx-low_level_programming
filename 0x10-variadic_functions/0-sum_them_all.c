#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all- variadic function to find sum
*
* @n: constant int used
*
* Return: sum if n is not 0
*        0 if n is 0
*/
int sum_them_all(const unsigned int n, ...)
{
if (n != 0)
{
va_list ap;
unsigned int i;
int sum = 0;
va_start(ap, n);
for (i = 0; i < n; i++)
{
sum += va_arg(ap, int);
}
va_end(ap);
return (sum);
}
return (0);
}
