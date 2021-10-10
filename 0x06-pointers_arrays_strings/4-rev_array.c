#include "main.h"
/**
 * reverse_array - to reverse the integers in an array
 *
 * @a: an array to reverse
 *
 * @n: number of elements in an array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
int i;
int temp;
for (i = 0; i < n - 1; i++)
{
temp = a[n - 1];
a[n - 1] = a[i];
a[i] = temp;
n--;
}
}
