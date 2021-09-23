#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*
*
*
*
*
*
*
*
*/
char *argstostr(int ac, char **av)
{
char *dest;
if (ac == 0 || av == 0)
{
return (0);
}
dest = malloc(sizeof(char *) * ac);
if (dest == 0)
{
return (0);
}
while(ac--)
{
dest = *av;
printf("%s\n", dest++);
}
return (dest);
}
