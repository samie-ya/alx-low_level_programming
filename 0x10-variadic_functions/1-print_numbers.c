#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers- function that print numbers
*
* @separator:separator between numbers
*
* @n: numbers to be used
*
* Return: Nothing
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
if (n > 0)
{
va_list ap;
unsigned int i = 0;
va_start(ap, n);
while (i < n)
{
printf("%d", va_arg(ap, int));
if (i < n - 1 && separator != 0)
{
printf("%s", separator);
}
i++;
}
va_end(ap);
printf("\n");
}
}
