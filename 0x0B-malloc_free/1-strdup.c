#include "main.h"
#include <stdlib.h>
/**
* *_strdup- duplicates a files and returns to the file duplicated
*
* @str: string used
*
* Return: to the duplicated
*/
char *_strdup(char *str)
{
char *dest;
int i = 0;
int j;
if (str == 0)
{
return (0);
}
while (str[i] != '\0')
{
i++;
}
dest = malloc((sizeof(char) * i) +1);
if (dest == 0)
{
return (0);
}
for (j = 0; j < i; j++)
{
dest[j] = str[j];
}
dest[j] = '\0';
return (dest);
}
