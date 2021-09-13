#include "main.h"
/**
* _strpbrk- to find character and write the script
*
* @s: to be scanned
*
* @accept: to be searched
*
* Return: if accept found - s
*         if not found 0
*/
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
while (*accept)
{
if (*s == *accept)
{
return (s - 1);
}
else
s++;
accept++;
}
s++;
}
return ('\0');
}
