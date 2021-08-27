#include <stdio.h>
/**
 * main - will be printing numbers in decending order.
 *
 * Return: value 0
 */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar((i % 10) + '0');
if (i == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
