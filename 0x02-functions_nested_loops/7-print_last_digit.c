#include "main.h"
/**
* print_last_digit- to print last digit
*
* @n: the argument used
*
* Return: value 0
*/
int print_last_digit(int n)
{
int value = n % 10;
if (value < 0)
value *= -1;
_putchar(value + '0');
return (value);
}
