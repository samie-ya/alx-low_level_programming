#include <stdio.h>
int main(void)
{
int i;
char c;
float f;
long int li;
long long int lli;
printf("Size of a int:%lt\n", (unsigned long)sizeof(i));
printf("Size of a char:%lt\n", (unsigned long)sizeof(c));
printf("Size of a float:%lt\n", (unsigned long)sizeof(f));
printf("Size of a long int:%lt\n", (unsigned long)sizeof(li));
printf("Size of a long long int:%lt\n", (unsigned long)sizeof(lli));
return (0);
}
