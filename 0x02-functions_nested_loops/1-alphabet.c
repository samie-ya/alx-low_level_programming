#include "main.h"
/**
* print_alphabet- is a new function to print lower case
*
* Return: value 0
*/
void print_alphabet(void)
{
char print_alphabet;
for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
{
_putchar(print_alphabet);
}
_putchar('\n');
return;
}
