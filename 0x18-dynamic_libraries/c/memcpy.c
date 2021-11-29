#include "main.h"
/**
* _memcpy- to copy memory
*
* @dest: destination
*
* @src: to be copied
*
* @n: the number of bytes to be copied
*
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (src[i] != '\0')
{
i++;
}
for (i = 0; i < n && src[i]; i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
