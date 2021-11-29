#include "main.h"
/**
* _atoi- to convert string to integer
*
* @s: string to scanned
*
* Return: res *sign
*/
int _atoi(char *s)
{
int sign = 1;
unsigned int res = 0;
while (*s)
{
if (*s == '-')
{
sign = sign * -1;
}
else if (*s >= '0' && *s <= '9')
{
res = (res * 10) + (*s - '0');
}
else if (res > 0)
{
break;
}
s++;
}
return (res *sign);
}
