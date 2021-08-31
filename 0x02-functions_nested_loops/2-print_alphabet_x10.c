#include "main.h"
/**
*
* main - print alphabet 10 times 
*
* Return: value 0
*/
int main(void)
{
int i = 0;
while (i < 10)
{
char print_alphabet_x10;
for ((print_alphabet_x10 = 'a'); (print_alphabet_x10 <= 'z'); (print_alphabet_x10++)) 
{
_putchar(print_alphabet_x10);
}
_putchar('\n');
i++;
}
return (0);
}
