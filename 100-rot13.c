#include "main.h"
/**
*
*
*
*
*
*
*
*
*
*/
char *rot13(char *s)
{
int i = 0;
int n = 0;
char a[] = {'A', 'B', 'C', 'D', 'E', 'F',
            'G', 'H', 'I', 'J', 'K', 'L',
            'M', 'N', 'O', 'P', 'Q', 'R',
            'S', 'T', 'U', 'V', 'W', 'X',
            'Y', 'Z', 'a', 'b', 'c', 'd',
            'e', 'f', 'g', 'h', 'i', 'j',
            'k', 'l', 'm', 'n', 'o', 'p',
            'q', 'r', 's', 't', 'u', 'v',
            'w', 'x', 'y', 'z'};
char b[] = {'N', 'O', 'P', 'Q', 'R', 'S',
            'T', 'U', 'V', 'W', 'X', 'Y',
            'Z', 'A', 'B', 'C', 'D', 'E',
            'F', 'G', 'H', 'I', 'J', 'K',
            'L', 'M', 'n', 'o', 'p', 'q',
            'r', 's', 't', 'u', 'v', 'w',
            'x', 'y', 'z', 'a', 'b', 'c',
            'd', 'e', 'f', 'g', 'h', 'i',
            'j', 'k', 'l', 'm'};
while (s[i] != '\0')
{
for (n = 0; n < 52; n++)
{
if (s[i] == a[n])
{
s[i] = b[n];
break;
}
}
i++;
}
return (s);
}
