#include <stdio.h>
/**
 * main - printing using putchar.
 *
 * Return: value 0
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar((i % 10) + '0');
}
return (0);
}
