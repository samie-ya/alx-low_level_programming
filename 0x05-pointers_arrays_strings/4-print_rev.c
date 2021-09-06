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
int i = 0;
while (s[i] != '\0')
{
i++;
}
for (i = 0; i = (i - 1); i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
