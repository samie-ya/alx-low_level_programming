#include "main.h"
/**
* _strspn- scan and prints the length found
*
* @s: to be scanned
*
* @accept: contains the characters
*
* Return: value length
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
unsigned int j;
while (*(s + i))
{
j = 0;
while (*(accept + j))
{
if (*(s  + i) == *(accept + j))
{
break;
}
j++;
}
if (!*(accept + j))
{
return (i);
}
i++;
}
return (i);
}
