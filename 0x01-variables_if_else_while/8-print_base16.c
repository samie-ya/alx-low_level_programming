#include <stdio.h>
/**
 * main - printing hexadecimals
 *
 * Return: value 0
 */
int main(void)
{
char i;
for (i = 0; i <= 15; i++)
{
putchar((i % 10) + 'a');
}
return (0);
}