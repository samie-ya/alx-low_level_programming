#include "main.h"
/**
* _strcmp- used to compare pointers
*
* @s1: parameter used
*
* @s2: parameter used
*
* Return: compare
*/
int _strcmp(char *s1, char *s2)
{
int compare = 0;
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
s1++;
s2++;
}
compare = (*s1 == *s2) ? 0 : (*s1 > *s2) ? 15 : -15;
return (compare);
}
