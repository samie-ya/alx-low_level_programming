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
int i = 0;
while (s[i] >= '\0')
{
if (s[i] == c)
{
return (s + i);
}
i++;
}
return ('\0');
}
