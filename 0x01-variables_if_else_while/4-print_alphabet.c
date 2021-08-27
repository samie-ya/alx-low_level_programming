#include <stdio.h>
/**
 * main - will not output q an e
 *
 * Return: value 0
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
if (a != 'e' && a != 'q')
putchar(a);
putchar('\n');
return (0);
}
