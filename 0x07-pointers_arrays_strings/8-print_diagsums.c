#include "main.h"
#include <stdio.h>
/**
* print_diagsums- adds diagonals
*
* @a: contains array
*
* @size: the size of array
*
* Return: value nothing
*/
void print_diagsums(int *a, int size)
{
int i;
int j;
int total = 0;
int sum = 0;
int k;
for (i = 0; i < size; i++)
{
k = ((i * size) + i);
total += *(a + k);
}
for (j = 0; j < size; j++)
{
k = ((j * size) + (size - 1 - j));
sum += *(a + k);
}
printf("%d, %d", total, sum);
printf("\n");
}
