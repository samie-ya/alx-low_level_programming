#include "dog.h"
#include <stdlib.h>
/**
* free_dog- to free the memory allocated by dog
*
* @d: pointer used
*
* Return: 0 - if d = 0
*/
void free_dog(dog_t *d)
{
if (d == 0)
{
return;
}
free(d->owner);
free(d->name);
free(d);
}
