#include "main.h"
/**
*
*
*
*
*
*
*/
void rev_string(char *s)
{
int i, c, k;
char aux;
char *a;
a = s;
while (s[c] != '\0')
{
c++;
}
for (k = 1; k < c ; k++)
{
a++;
}
for (i = 0; i < (c / 2); i++)
{
aux = s[i];
s[i] = *a;
*a = aux;
a--;
}
}
