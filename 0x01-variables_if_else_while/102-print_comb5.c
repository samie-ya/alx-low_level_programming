#include <stdio.h>
/**
* main- prints 4 digits
*
* Return: value 0
*/
int main(void)
{
int i;
int j;
int l;
int m;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 8; j++)
{
for (l = i + 1; l <= 9; l++)
{
for (m = j + 1; m <= 9; m++)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
putchar(' ');
putchar((l % 10) + '0');
putchar((m % 10) + '0');
if ((i == 9 && j == 8) && (l == 9 && m == 9))
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
}
return (0);
}
