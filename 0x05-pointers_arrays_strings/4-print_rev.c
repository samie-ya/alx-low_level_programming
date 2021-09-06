#include "main.h"
/**
*
*
*
*
*
*
*
*/
void print_rev(char *s)
{
int c;
char *begin, *end, temp;
int d = 0;
for (; *s != 0; s++)
{
begin = s;
end = s;
for (c = 0; c < d -1; c++)
end++;
for (c = 0; c < d / 2; c++)
{
temp = *end;
*end = *begin;
*begin = temp;
begin++;
end--;
}
d++;
}
}
