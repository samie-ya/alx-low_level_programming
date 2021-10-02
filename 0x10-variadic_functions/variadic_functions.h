#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_chars(char *separator, va_list(ap));
void print_char(char *separator, va_list(ap));
void print_int(char *separator, va_list(ap));
void print_float(char *separator, va_list(ap));

/**
* struct list_types- datatype
*
* @c: specifier
*
* @fun: function pointer
*/
typedef struct format_types
{
char *c;
void (*fun)(char *separator, va_list(ap));
} list_types;


#endif
