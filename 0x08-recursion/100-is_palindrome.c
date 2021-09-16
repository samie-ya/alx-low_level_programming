#include "main.h"
int _palindrome(char *s);
/**
*
*
*
*
*
*
*
*
*/
int is_palindrome(char *s)
{
if (*s == '0')
{
return (1);
}
return (_palindrome(s));
}
/**
*
*
*
*
*
*
*
*/
int _palindrome(char *s)
{
int i = _length(s) - 1;
if (*s == s[i])
{
s++;
i++;
}
else
{
return (0);
}
return (1);
}
int _length(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (_length(s) + 1);
}
