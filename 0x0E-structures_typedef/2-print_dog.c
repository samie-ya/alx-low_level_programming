#include "dog.h"
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
*
*/
void print_dog(struct dog *d)
{
if (d->name == 0)
{
printf("Name: %s\n", d->name);
}
if (d->age == 0)
{
printf("Age: %f\n", d->age);
}
if (d->owner == 0)
{
printf("Owner: %s\n", d->owner);
}
if (d == 0)
{
printf("\n");
}
}
