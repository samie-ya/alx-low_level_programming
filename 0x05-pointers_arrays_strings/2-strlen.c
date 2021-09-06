#include "main.h"
/**
*
*
*
*
*
*/
int _strlen(char *s)
{
int i = 0;
for (; *s != '\0'; s++)
{
i++;
}
return(i);
}
