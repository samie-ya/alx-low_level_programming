#include "function_pointers.h"
/**
* print_name- function to print a name
*
* @name: name to be printed
*
* @f: pointer to function print_name
*
* Return: value nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (name != 0 && f != 0)
{
f(name);
}
}
