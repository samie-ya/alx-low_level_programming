#include "main.h"
/**
* _puts- print charcter
*
* @str: parameter used
*
* Return: nothing
*/
void _puts(char *s)
{
while (*s != '\0')
{
_putchar(*s++);
}
_putchar('\n');
}
