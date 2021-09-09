#include "main.h"
/**
* _strncpy- to copy till n
*
* @dest: parameter used
*
* @src: parameter used
*
* @n: parameter used
*
* Return: value temp
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
char *temp;
temp = dest;
for (i = 0; i < n; i++)
{
*dest++ = *src++;
}
if (n--)
{
*dest++ = '\0';
}
return (temp);
}
