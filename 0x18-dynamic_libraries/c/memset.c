#include "main.h"
/**
* _memset- fills memory
*
* @s: memory to be filled
*
* @b: used to replace memory
*
* @n: number of s to be changed
*
* Return: value s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (s[i] != '\0')
{
i++;
}
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
