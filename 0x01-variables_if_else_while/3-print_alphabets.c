#include <stdio.h>
/**
 * main - will be printing alphabets
 *
 * Return: value is 0
 */
int main(void)
{
char A;
for (A = 'a'; A <= 'z'; A++)
{
putchar(A);
}
for (A = 'A'; A <= 'Z'; A++)
{
putchar(A);
}
putchar('\n');
}
return (0);
}
