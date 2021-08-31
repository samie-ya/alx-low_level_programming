#include "main.h"
/**
* _isalpha- prints alphabet only
*
* @c: is the parameter used
*
* Return: value 0
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
return (0);
}
