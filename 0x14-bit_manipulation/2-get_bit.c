#include "main.h"

/**
*
*
*
*
*
*/

int get_bit(unsigned long int n, unsigned int index)
{
int i;

i = (n >> index) & 1;
return (i);
}
