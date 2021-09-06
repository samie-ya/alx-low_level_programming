#include "main.h"
/**
* rev_string- reverses a string
*
* @s: parameter used
*
* Return: nothing
*/
void rev_string(char *s)
{
int i = 0;
int j;
int k;
int l;
char temp;
while (s[i] != '\0')
{
i++;
}
j = 0;
k = i - 1;
for (l = j; l < k; l++)
{
temp = s[l];
s[l] = s[k];
s[k] = temp;
k--;
}
}
