#include "main.h"
/**
* _pow_recursion- finds the x to power of y
*
* @x: the number to be multiplied
*
* @y: the number to multiply x times
*
* Return: if y > 0 - x * _pow_recursion(x, y - 1)
*         if y < 0 - -1
*         else - 1
*/
int _pow_recursion(int x, int y)
{
if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
if (y < 0)
{
return (-1);
}
else
{
return (1);
}
}
