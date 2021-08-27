#include <stdio.h>
/**
 * main - double digits time
 *
 * Return: value 0
 */
int main(void)
{
int i;
for (i <= '100'; i >= '00'; i++)
{
putchar(i);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
