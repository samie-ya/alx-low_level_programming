#include <stdio.h>
/**
* main- prints 4 digits where the first 2 are less than the last 2
*
* Return: value 0
*/
int main(void)
{
int i;
int j;
int l;
int m;
int n;
int o;
for (i = 0; i < 100; i++)
{
for (j = 0; j < 100; j++)
{
l = i / 10;
m = i % 10;
n = j / 10;
o = j % 10;
if (i < j)
{
putchar((l) +'0');
putchar((m) +'0');
putchar(' ');
putchar((n) +'0');
putchar((o) +'0');
if (l == 9 && m == 8 && n == 9 && o == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
