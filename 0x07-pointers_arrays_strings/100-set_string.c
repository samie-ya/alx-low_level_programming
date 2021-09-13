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
*
*/
void set_string(char **s, char *to)
{
int i = 0;
while (**(s + i) != '\0')
{
*(to + i) = **(s + i);
i++;
}
}
