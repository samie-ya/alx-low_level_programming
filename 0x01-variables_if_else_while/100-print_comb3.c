#include <stdio.h>
/**
 * main - double digits time
 *
 * Return: value 0
 */
int main(void)
{
int i = 00;
while (i <= 100)
{
putchar(i);
i++;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
