#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings- prints strings
*
* @separator: separator between strings
*
* @n: number of arguments passed
*
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list(ap);
unsigned int i;
char *c;
if (n != 0)
{
va_start(ap, n);
for (i = 0; i < n; i++)
{
c = va_arg(ap, char *);
if (c == 0)
{
printf("(nil)");
}
else
{
printf("%s", c);
}
if (i < n - 1 && separator != 0)
{
printf("%s", separator);
}
}
va_end(ap);
}
printf("\n");
}
