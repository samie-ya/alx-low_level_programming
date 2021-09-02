#include "main.h"
/**
* _isupper- return 1 to upper case
*
* @c: Parameter used
*
* Return: value 1
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
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
