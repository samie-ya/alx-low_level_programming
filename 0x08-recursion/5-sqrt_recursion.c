#include "main.h"
int _srt(int n, int i);
/**
* _sqrt_recursion- return natural number of a squareroot
*
* @n: number to squareroot
*
* Return: if square root - natural number
*/
int _sqrt_recursion(int n)
{
return (_srt(n, 1));
}
/**
* _srt- to find square root
*
* @n: to be squareroot
*
* @i: the square root of n
*
* Return: if squareroot - 1
*         if not squareroot -1
*/
int _srt(int n, int i)
{
int srt = i * i;
if (srt > n)
{
return (-1);
}
if (srt == n)
{
return (i);
}
return (_srt(n, i + 1));
}
