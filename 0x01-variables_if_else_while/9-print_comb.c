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
putchar((i % 10) + '0');
putchar(32);
putchar(44);
return (0);
}
