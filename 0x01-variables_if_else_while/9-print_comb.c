#include <stdio.h>
/**
 * main - will be printing numbers in decending order.
 *
 * Return: value 0
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
putchar(44);
putchar(32);
putchar((i % 10) + '0');
return (0);
}
