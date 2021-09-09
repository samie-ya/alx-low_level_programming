#include "main.h"
/**
 *reverse_array - For printing an integer array in reverse order
 *@a: pointer to the string
 *@n: number of elements in the array
 *
 *no return since its void
 */
void reverse_array(int *a, int n)
{
        int i;
        for (i = 0; i < (n / 2); i++)
        {
            int swap = a[n - 1 - i];
            a[n - 1 - i] = a[i];
            a[i] = swap;
        }
}
