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
int i = 0;
int j = 0;
while (src[i] != '\0')
{
i++;
}
while (j < n && src[j])
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
