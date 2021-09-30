#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* op_add- function that adds
*
* @a: an operand
*
* @b: an operand
*
* Return: added result
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub- function that subtracts
*
* @a: an operand
*
* @b: an operand
*
* Return: subtracted result
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul- function that multiplies
*
* @a: an operand
*
* @b: an operand
*
* Return: multiplied result
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
* op_div- function that divides
*
* @a: an operand
*
* @b: an operand
*
* Return: divided function if b isnot 0
*       : else exit 100
*/
int op_div(int a, int b)
{
if (b != 0)
{
return (a / b);
}
else
{
printf("Error\n");
exit(100);
}
}
/**
* op_mod- function that does modulus
*
* @a: an operand
*
* @b: an operand
*
* Return: if b isn't zero modulus result
*       : Else exit 100
*/
int op_mod(int a, int b)
{
if (b != 0)
{
return (a % b);
}
else
{
printf("Error\n");
exit(100);
}
}
