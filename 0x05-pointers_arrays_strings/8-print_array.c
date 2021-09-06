#include "main.h"
#include <stdio.h>
/**
* print_array- prints all array values
*
* @n: number of array
*
* @a:pointer used
*
* Return: value 0
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", *(a + i));
if ((i != n - 1))
{
printf(", ");
}
}
printf("\n");
return;
}
