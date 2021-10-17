#include "main.h"

/**
*
*
8
8
*
*
*
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int i = 0;

if ((n & m) != m)
{
n ^= m;
i++;
}
return (i);
}
