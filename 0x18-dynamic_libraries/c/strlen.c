#include "main.h"
/**
* _strlen- prints length of string
*
* @s: parameter used
*
* Return: value i
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
