#include <stdio.h>
/**
 * main - printing hexadecimals
 *
 * Return: value 0
 */
int main(void)
{
int i;
char a;
for (i = 0; i < 10; i++)
putchar((i % 10) + '0');
for (a = 'a'; a <= 'f'; a++)
putchar(a);
putchar('\n');
return (0);
}
