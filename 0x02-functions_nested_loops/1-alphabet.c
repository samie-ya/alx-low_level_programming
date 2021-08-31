# include "main.h"
/**
* main - to print alphabet in lower case
*
* Return: value 0
*/
int main(void)
{
char print_alphabet;
for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
{
_putchar(print_alphabet);
}
_putchar('\n');
return (0);
}
