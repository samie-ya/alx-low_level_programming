#include "main.h"
/**
* reverse_array- For printing an integer array in reverse order
*
* @a: parameter used
*
* @n: parameter used
*
* Return: value nothing
*/
void reverse_array(int *a, int n)
{
int i = 0;
int j;
int k;
int l;
char temp;
while (a[i] != '\0')
{
i++;
}
j = 0;
k = n - 1;
for (l = j; l < k; l++)
{
temp = a[l];
a[l] = a[k];
a[k] = temp;
k--;
}
}
