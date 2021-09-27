#include "dog.h"
/**
* init_dog- intializes struct dog
*
* @d: pointer used
*
* @name: name record
*
* @age: age record
*
* @owner: owner record
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != 0)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
