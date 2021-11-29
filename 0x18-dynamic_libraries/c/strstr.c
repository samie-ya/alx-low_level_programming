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
while (*haystack)
{
char *i = haystack;
char *j = needle;
while (*haystack && j && *haystack == *j)
{
haystack++;
j++;
}
if (!*j)
return (i);
haystack = i + 1;
}
return ('\0');
}
