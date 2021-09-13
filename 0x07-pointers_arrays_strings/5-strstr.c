#include "main.h"
/**
* _strstr- finding a string in string
*
* @haystack: string to be scanned
*
* @needle: string to find
*
* Return: if found - needle
*         if not found -null
*/
char *_strstr(char *haystack, char *needle)
{
int i;
int j;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i] == needle[j])
{
return (needle);
}
}
}
return ('\0');
}
