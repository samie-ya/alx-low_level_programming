#include "main.h"
/**
* _strcat- concactenates two strings
*
* @dest: parameter used
*
* @src: parameter used
*
* Return: value dest
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int j;
while (dest[i] != '\0')
{
i++;
}
for (j = 0; src[j] != '\0'; j++, i++)
{
dest[i] = src[j];
}
dest[i] = '\0';
return (dest);
}
