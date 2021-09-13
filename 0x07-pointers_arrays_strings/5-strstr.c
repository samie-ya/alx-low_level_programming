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
int  i = 0;
while (needle[i] != '\0')
{
while (*haystack)
{
if (*haystack == *needle)
{
if (!(haystack[i] == needle[i]))
return (haystack);
}
haystack++;
}
i++;
}
return ('\0');
}
