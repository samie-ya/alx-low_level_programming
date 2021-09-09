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
char *temp;
temp = dest;
while (*src && n--)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (temp);
}
