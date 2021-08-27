#include <stdio.h>
/**
 * main - double digits time
 *
 * Return: value 0
 */
int main(void)
{
int i;
for (i = '0'; i < '100'; i++)
{
putchar(i);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
