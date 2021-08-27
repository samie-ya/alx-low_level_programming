#include <stdio.h>
/**
 * main - will be printing alphabets
 *
 * Return: value is 0
 */
int main(void)
{
char A;
char a;
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
for (A = 'A'; A <= 'Z'; A++)
{
putchar(A);
}
putchar('\n');
}
return (0);
}
