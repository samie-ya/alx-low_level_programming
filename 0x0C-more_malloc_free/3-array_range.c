#include "main.h"
#include <stdlib.h>
/**
* *array_range- create array of integers
*
* @min: minimum value
*
* @max: max value
*
* Return: if function fails - 0
*         if function works - points to pointer
*
*
*/
int *array_range(int min, int max)
{
int *dest;
int i = 0;
int j;
if (min > max)
{
return (0);
}
j = max - min + 1;
dest = malloc(sizeof(int) * j);
if (dest == 0)
{
return (0);
free(dest);
}
for (i = 0; i < j; i++)
{
dest[i] = min;
min++;
}
return (dest);
}
