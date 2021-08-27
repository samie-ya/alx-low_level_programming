#include <stdio.h>
/**
 * main - will be displaying characters
 *
 * Return: value is 0
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
putchar(0);
}
return (0);
}
