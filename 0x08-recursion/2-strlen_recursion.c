#include "main.h"
/**
* _strlen_recursion- prints length of string
*
* @s: string to be counted
*
* Return: i- if *s = NULL
*       : _strlen_recusrsion if *s is not null
*
*
*
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (1  + _strlen_recursion(s));
}
