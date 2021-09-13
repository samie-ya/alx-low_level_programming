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
int i;
int temp;
int j;
for (i = 0; i < n; i++)
{
a++;
}
for (i = 0; i < n / 2; i++)
{
temp = *(a + i);
*(a + i) = *(a + n -1 - i);
*(a + n - 1 - i) = temp;
a++;
}
}
