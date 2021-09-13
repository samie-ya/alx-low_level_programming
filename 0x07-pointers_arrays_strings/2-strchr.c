#include "main.h"
/**
* _strchr- to scan a string to find a character
*
* @s: to be scanned
*
* @c: character to be searched
*
* Return: if c - then to c
*         if no c - null
*
*/
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
{
return (s);
}
else
s++;
}
return ('\0');
}
