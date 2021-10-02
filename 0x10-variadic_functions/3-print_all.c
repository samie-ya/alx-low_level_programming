#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*
*
*
*
*
*
*/
void print_all(const char * const format, ...)
{
list_types frmt[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_chars},
		};
va_list(ap);
int i = 0;
int j;
char *separator = ",";
if (format != 0)
{
va_start(ap, format);
while (i < format[i])
{
j = 0;
while (j < 4)
{
if (format[i] == *frmt[j].c)
{
frmt[j].fun(separator, (ap));
}
j++;
}
i++;
}
va_end(ap);
}
printf("\n");
}
/**
* print_char- prints characters
*
* @separator: used to separate
*
* @va_list(ap): holds ap that is to be initialized
*
* Return: Nothing
*/
void print_char(char *separator, va_list(ap))
{
printf("%i", va_arg(ap, int));
printf("%s", separator);
}
/**
* print_int- prints integers
*
* @separator: used to separate
*
* @va_list(ap): holds ap that is to be initialized
*
* Return: Nothing
*/
void print_int(char *separator, va_list(ap))
{
printf("%i", va_arg(ap, int));
printf("%s", separator);
}
/**
* print_float- prints float
*
* @separator: used to separate
*
* @va_list(ap): holds ap that is to be initialized
*
* Return: Nothing
*/
void print_float(char *separator, va_list(ap))
{
printf("%f", va_arg(ap, double));
printf("%s", separator);
}
/**
* print_chars- prints strings
*
* @separator: used to separate
*
* @va_list(ap): holds ap that is to be initialized
*
* Return: Nothing
*/
void print_chars(char *separator, va_list(ap))
{
if ((va_arg(ap, char *)) != 0)
{
printf("%s", va_arg(ap, char *));
printf("%s", separator);
}
else
{
printf("(nil)");
}
}
